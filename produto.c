#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

struct Produto{
    int codProduto;
    char nome[51];
    double preco;
};

void inicializar(){
    int i;
    for(i=0; i<T; i++){
        vProdutos[i] = NULL;
    }
}

void ler(int p){
    if(p>=T){
        printf("LIMITE EXEDITO \n");
        system("pause");
        return;
    }
    vProdutos[p] = (pProduto) malloc(sizeof(struct Produto));
    fflush(stdin);
    printf("Digite o codigo do Produto: \n");
    scanf("%d", &vProdutos[p]->codProduto);
    fflush(stdin);
    printf("Digite o Nome do Produto: \n");
    gets(vProdutos[p]->nome);
    fflush(stdin);
    printf("Digite o valor do Produto: \n");
    scanf("%lf", &vProdutos[p]->preco);
    printf("Produto cadastrado com sucesso \n");
    system("pause");
}

void imprimir(int proInf){
    int i;
    for(i=0; i<T; i++){
        if(vProdutos[i]!=NULL){
            if(vProdutos[i]->codProduto == proInf){
                system("cls");
                printf("--->   PRODUTO   <--- \n");
                printf("%d      %s      R$ %.2f \n", vProdutos[i]->codProduto,vProdutos[i]->nome,vProdutos[i]->preco);
                system("pause");
                return;
            }
        }
    }
    printf("--->   PRODUTO NAO CADASTRADO   <--- \n");
    system("pause");
}

void imprimirTodos(){
    int i;
    double somatorio;
    system("cls");
    for(i=0; i<T; i++){
        if(vProdutos[i]!=NULL){
                printf("%d      %s      R$ %.2f \n", vProdutos[i]->codProduto,vProdutos[i]->nome,vProdutos[i]->preco);
                somatorio = somatorio + vProdutos[i]->preco;
        }

    }
    printf("--->   TOTAL   <--- \nR$%.2f \n\n", somatorio);

    system("pause");
}

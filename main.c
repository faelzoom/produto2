#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

int main()
{
    int p=0;
    int SelecionaIten = 0;
    int opc = 0;
    inicializar();
    do{
        system("cls");
        printf("-------------------------------- \n");
        printf("--->      Menu Produtos     <--- \n");
        printf("--->   1- Cadastrar Itens   <--- \n");
        printf("--->   2- Procurar Itens    <--- \n");
        printf("--->   3- Todos Itens       <--- \n");
        printf("--->   4- Quantidade Total  <--- \n");
        printf("--->   5- Para Sair         <--- \n");
        printf("-------------------------------- \n");
        printf("Digite uma opcao: \n");
        scanf("%d", &opc);
        switch(opc){
        case 1:
            system("cls");
            ler(p);
            p++;
            break;
        case 2:
            system("cls");
            fflush(stdin);
            printf("Digite o codigo do Iten ? \n");
            scanf("%d", &SelecionaIten);
            imprimir(SelecionaIten);
            break;
        case 3:
            system("cls");
            imprimirTodos();
            break;
        case 4:
            system("cls");
            printf("Quantidade de itens cadastrado ? %d \n", p);
            system("pause");
        case 5:
            system("cls");
            printf("--->   OBRIGADO VOLTE SEMPRE   <---\n");
            break;
        default:
            system("cls");
            printf("--->   OPCAO INVALIDA TENTE NOVAMENTE   <--- \n");
            system("pause");
        }
    }while(opc!=5);
    return 0;
}

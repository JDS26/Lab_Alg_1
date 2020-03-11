#include <stdio.h>
#include "contas.h"
#include <math.h>
#include <stdlib.h>

int escolha;
void menu() {
    printf("Que tipo de questao pretende realizar?\n");
    printf("1-Soma\n");
    printf("2-Substracao\n");
    printf("3-Multiplicacao\n");
    printf("4-Divisao\n");
    scanf("%d",&escolha);
    printf("\n");
    switch(escolha) {
        case 1:
            soma();
            break;
        case 2:
            subtra();
            break;
        case 3:
            mult();
            break;
        case 4:
            dividir();
            break;
        case 5:
            break;
        default:
            printf("Opcao invalida\n");
            break;
    }
}

int main(){

    back:
    menu();
    if (escolha == 5) return 0;
    else goto back;

}
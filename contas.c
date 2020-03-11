//
// Created by João Silva on 12/02/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contas.h"


void mult(){
    int i,j,a=0,resposta,b,m;

    i=rand() % 10;
    j=rand() % 10;
    char *bom[] = {"Bom trabalho!", "Otimo!", "Boa!", "Nice!"};
    char *mau[] = {"Tenta outra vez!", "Concentra-te!", "Ve bem"};


    while (a>=0) {

        printf("Qual e o resultado da multiplicacao de %d e %d?", i, j);
        scanf("%d", &resposta);

        if (i * j == resposta) {
            b = rand() % 4;
            printf("%s\n", bom[b]);
            mult2();
            break;
        }
        else{
            m = rand() % 3;
            printf("%s\n", mau[m]);
        }
    }
    a++;
}

void mult2(){
    int i,j,a=0,reposta2,b,m;
    i = rand() % 100;
    j = rand() % 100;
    char *bom[] = {"Bom trabalho!", "Otimo!", "Boa!", "Nice!"};
    char *mau[] = {"Tenta outra vez!", "Concentra-te!", "Ve bem"};
    while(a>=0) {
        printf("Qual e o resultado da multiplicacao de %d e %d?", i, j);
        scanf("%d", &reposta2);
        if(i*j==reposta2) {

            b = rand() % 4;
            printf("%s\n", bom[b]);
            mult3();
            break;
        }
        else {
            m = rand() % 3;
            printf("%s\n", mau[m]);
        }


        a++;
    }

}

void mult3(){
    int i,j,a=0,reposta3,b,m;
    i = rand() % 1000;
    j = rand() % 1000;
    char *bom[] = {"Bom trabalho!", "Otimo!", "Boa!", "Nice!"};
    char *mau[] = {"Tenta outra vez!", "Concentra-te!", "Ve bem"};
    while(a>=0){
        printf("Qual e o resultado da multiplicacao de %d e %d?", i, j);
        scanf("%d", &reposta3);
        if(i*j==reposta3) {
            b = rand() % 4;
            printf("%s\n", bom[b]);
            break;
        }
        else {
            m = rand() % 3;
            printf("%s\n", mau[m]);
        }


        a++;
    }

}

void soma(){
    int i,j,a=0,resposta,b,m;

    i=rand() % 10;
    j=rand() % 10;
    char *bom[] = {"Bom trabalho!", "Otimo!", "Boa!", "Nice!"};
    char *mau[] = {"Tenta outra vez!", "Concentra-te!", "Ve bem"};


    while (a>=0) {

        printf("Qual e o resultado da soma de %d e %d?", i, j);
        scanf("%d", &resposta);

        if (i + j == resposta) {
            b = rand() % 4;
            printf("%s\n", bom[b]);
            soma2();
            break;
        }
        else{
            m = rand() % 3;
            printf("%s\n", mau[m]);
        }
    }
    a++;
}

void soma2(){
    int i,j,a=0,reposta2,b,m;
    i = rand() % 100;
    j = rand() % 100;
    char *bom[] = {"Bom trabalho!", "Otimo!", "Boa!", "Nice!"};
    char *mau[] = {"Tenta outra vez!", "Concentra-te!", "Ve bem"};
    while(a>=0) {
        printf("Qual e o resultado da soma de %d e %d?", i, j);
        scanf("%d", &reposta2);
        if(i+j==reposta2) {

            b = rand() % 4;
            printf("%s\n", bom[b]);
            soma3();
            break;
        }
        else {
            m = rand() % 3;
            printf("%s\n", mau[m]);
        }


        a++;
    }

}

void soma3(){
    int i,j,a=0,reposta3,b,m;
    i = rand() % 1000;
    j = rand() % 1000;
    char *bom[] = {"Bom trabalho!", "Otimo!", "Boa!", "Nice!"};
    char *mau[] = {"Tenta outra vez!", "Concentra-te!", "Ve bem"};
    while(a>=0){
        printf("Qual e o resultado da soma de %d e %d?", i, j);
        scanf("%d", &reposta3);
        if(i+j==reposta3) {
            b = rand() % 4;
            printf("%s\n", bom[b]);
            break;
        }
        else {
            m = rand() % 3;
            printf("%s\n", mau[m]);
        }


        a++;
    }

}

void subtra(){
    int i,j,a=0,resposta,b,m;

    i=rand() % 10;
    j=rand() % 10;
    char *bom[] = {"Bom trabalho!", "Otimo!", "Boa!", "Nice!"};
    char *mau[] = {"Tenta outra vez!", "Concentra-te!", "Ve bem"};


    while (a>=0) {

        printf("Qual e o resultado da subtracao de %d e %d?", i, j);
        scanf("%d", &resposta);

        if (i - j == resposta) {
            b = rand() % 4;
            printf("%s\n", bom[b]);
            subtra2();
            break;
        }
        else{
            m = rand() % 3;
            printf("%s\n", mau[m]);
        }
    }
    a++;
}

void subtra2(){
    int i,j,a=0,reposta2,b,m;
    i = rand() % 100;
    j = rand() % 100;
    char *bom[] = {"Bom trabalho!", "Otimo!", "Boa!", "Nice!"};
    char *mau[] = {"Tenta outra vez!", "Concentra-te!", "Ve bem"};
    while(a>=0) {
        printf("Qual e o resultado da subtracao de %d e %d?", i, j);
        scanf("%d", &reposta2);
        if(i-j==reposta2) {

            b = rand() % 4;
            printf("%s\n", bom[b]);
            subtra3();
            break;
        }
        else {
            m = rand() % 3;
            printf("%s\n", mau[m]);
        }


        a++;
    }

}

void subtra3(){
    int i,j,a=0,reposta3,b,m;
    i = rand() % 1000;
    j = rand() % 1000;
    char *bom[] = {"Bom trabalho!", "Otimo!", "Boa!", "Nice!"};
    char *mau[] = {"Tenta outra vez!", "Concentra-te!", "Ve bem"};
    while(a>=0){
        printf("Qual e o resultado da subtracao de %d e %d?", i, j);
        scanf("%d", &reposta3);
        if(i-j==reposta3) {
            b = rand() % 4;
            printf("%s\n", bom[b]);
            break;
        }
        else {
            m = rand() % 3;
            printf("%s\n", mau[m]);
        }


        a++;
    }

}

void dividir(){
    int i,j,a=0,resposta,b,m;

    i=rand() % 10;
    j=rand() % 10;
    char *bom[] = {"Bom trabalho!", "Otimo!", "Boa!", "Nice!"};
    char *mau[] = {"Tenta outra vez!", "Concentra-te!", "Ve bem"};


    while (a>=0) {

        printf("Qual e o resultado da divisao de %d e %d?", i, j);
        scanf("%d", &resposta);

        if (i / j == resposta) {
            b = rand() % 4;
            printf("%s\n", bom[b]);
            dividir2();
            break;
        }
        else{
            m = rand() % 3;
            printf("%s\n", mau[m]);
        }
    }
    a++;
}

void dividir2(){
    int i,j,a=0,reposta2,b,m;
    i = rand() % 100;
    j = rand() % 100;
    char *bom[] = {"Bom trabalho!", "Otimo!", "Boa!", "Nice!"};
    char *mau[] = {"Tenta outra vez!", "Concentra-te!", "Ve bem"};
    while(a>=0) {
        printf("Qual e o resultado da divisao de %d e %d?", i, j);
        scanf("%d", &reposta2);
        if(i/j==reposta2) {

            b = rand() % 4;
            printf("%s\n", bom[b]);
            dividir3();
            break;
        }
        else {
            m = rand() % 3;
            printf("%s\n", mau[m]);
        }


        a++;
    }

}

void dividir3(){
    int i,j,a=0,reposta3,b,m;
    i = rand() % 1000;
    j = rand() % 1000;
    char *bom[] = {"Bom trabalho!", "Otimo!", "Boa!", "Nice!"};
    char *mau[] = {"Tenta outra vez!", "Concentra-te!", "Ve bem"};
    while(a>=0){
        printf("Qual e o resultado da divisao de %d e %d?", i, j);
        scanf("%d", &reposta3);
        if(i/j==reposta3) {
            b = rand() % 4;
            printf("%s\n", bom[b]);
            break;
        }
        else {
            m = rand() % 3;
            printf("%s\n", mau[m]);
        }


        a++;
    }

}
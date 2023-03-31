#include <stdio.h>
#include <stdlib.h>

int x, y, z;

char meses [13] [15] = {"", "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

int main(){
    printf("Conversor de datas por extenso. \n");
    printf("Digite um dia do ano (somente numeros): ");
    scanf("%d", &x);

    system("cls");

    printf("Digite um mes do ano (somente numeros): ");
    scanf("%d", &y);

    if(y > 12) {
        printf("ERRO: Seu ano nao pode mais que 12 meses!\n\n");
        return(0);
    }


    system("cls");
    printf("Digite um ano(somente numeros): ");
    scanf("%d", &z);

    system("cls");

    printf("Sua data por extenso e:  %d de %s de %d", x, meses[y], z);

}


#include <stdio.h>
#include <stdlib.h>


float x,result;

int main(){

    printf("Calculadora de desconto salarial. \n");
    printf("Insira seu salario mensal: ");
    scanf("%f", &x);

    result = x * 0.11;

    if(result > 334.29){
        system("cls");
        printf("Erro: Seu desconto e maior do que o permitido! \n\n");

    } else {
        system("cls");
        printf("Seu desconto salarial referente a esse mes foi de: R$%.2f\n\n", result);

    }
    
    system("PAUSE");

}

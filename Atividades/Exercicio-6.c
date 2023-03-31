#include <stdio.h>
#include <stdlib.h>


float x,result;

int main(){

    printf("Insira seu salario mensal: ");
    scanf("%f", &x);

    result = x * 0.11;

    if(result > 334.29){
        system("cls");
        printf("Erro: Você e um escravo assalariado! \n\n"
               "----          ---- \n"
               "|  |          |  | \n"
               "|  |          |  | \n"
               "----          ---- \n\n"
               "__________________\n\n");

    } else {
        system("cls");
        printf("Seu desconto salarial referente a esse mes foi de: R$%.2f\n\n", result);

    }

}

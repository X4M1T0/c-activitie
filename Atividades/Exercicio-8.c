#include <stdio.h>
#include <stdlib.h>

float imc, peso, altura;

float a = 18.5, b = 24.9, c = 29.9, d = 34.9, e = 39.9;

char obs [6] [40] = {"Abaixo do peso", "Peso normal", "Sobrepeso", "Obeso leve", "Obeso moderado", "Obeso morbido"};


int main(){
    printf("Calculadora de IMC. \n");
    printf("Digite seu peso (em KG): ");
    scanf("%f", &peso);

    system("cls");

    printf("Digite sua altura (em CM): ");
    scanf("%f", &altura);

    system("cls");

    altura = altura * 0.01;
    altura = altura * altura;

    imc =  peso / altura;

    if(imc < a){
            printf("Voce e: %s", obs[0]);
            return(0);
    } else if(imc > a && imc < b){
            printf("Voce e: %s", obs[1]);
            return(0);
    } else if(imc > b && imc < c){
            printf("Voce e: %s", obs[2]);
            return(0);
    } else if(imc > c && imc < d){
            printf("Voce e: %s", obs[3]);
            return(0);
    } else if(imc > d && imc < e){
            printf("Voce e: %s", obs[4]);
            return(0);
    } else if(imc > e){
            printf("Voce e: %s", obs[5]);
    }
    
    system("PAUSE");
}

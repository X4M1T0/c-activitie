#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float valor;
    float M100,M50,M25,M10,M5,M1,cofre,resto;

    printf ("o valor do produto e:");
    scanf ("%f",&valor);

    printf ("moedas de 1 real:\n");
    scanf ("%f",&M100);

    printf ("moedas de 50 centavos:\n");
    scanf ("%f",&M50);

    printf ("moedas de 25 centavos:\n");
    scanf ("%f",&M25);

    printf ("moedas de 10 centavos:\n");
    scanf ("%f",&M10);

    printf ("moedas de 5 centavos:\n");
    scanf ("%f",&M5);

    printf ("moedas de 1 centavo:\n");
    scanf ("%f",&M1);

    cofre=M100+(0.5*M50)+(0.25*M25)+(0.10*M10)+(0.05*M5)+(0.01*M1);

    printf ("Dinheiro presente no cofre e:%.2f \n", cofre);

    if (cofre>valor){
            resto= cofre-valor;
        printf ("A compra pode ser feita e restara:%.2f \n",resto);
    }
    if (valor>cofre){
resto= cofre-valor;
        printf ("O dinheiro nao e suficiente, lhe falta:%.2f \n",resto);
    }
    if (valor==cofre)
        printf ("O valor e igual ao presente no cofre");
}

#include <stdio.h>
#include <stdlib.h>

int main(){
    float r,c,d,a;
printf("Calculadora de comprimenjto, diametro e areas de uma circunferencia pelo raio.\n");
printf("Digite o raio: ");
scanf("%f",&r);
c=2*3.14*r;
d=2*r;
a=3.14*(r*r);
printf("Resultados:\n\n");
printf("Comprimento: %.2f\n",c);
printf("Diametro: %.2f\n",d);
printf("Area: %.2f\n",a);


system("PAUSE");

}

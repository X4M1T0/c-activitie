#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float r1,pw1;
    int n1;
    printf ("O numero escolhido e:");
    scanf ("%d", &n1);

    if (n1%2==0){
            r1= sqrt (n1);
        printf ("esse numero e par e sua raiz quadrada e :%.2f", r1);

    }
    if (n1%2!=0){
        pw1=n1*n1;
        printf ("esse numero e impar e quando elevado ao quadrado ele se torna:%.2f", pw1);
    }


}

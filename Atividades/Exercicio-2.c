#include <stdio.h>
#include <stdlib.h>
 int main() {
     int m;
printf("Digite o numero do mes que lhe mostrarei nome do mes por extenso: ");
scanf("%d",&m);
if (m==1){
    printf("Janeiro");
}
else if (m==2){
    printf("Fevereiro");
}
else if (m==3){
    printf("Marco");
}
else if (m==4){
    printf("Abril");
}
else if (m==5){
    printf("Maio");
}
else if (m==6){
    printf("Junho");
}
else if (m==7){
    printf("Julho");
}
else if (m==8){
    printf("Agosto");
}
else if (m==9){
    printf("Setembro");
}else if (m==10){
    printf("Outubro");
}
else if (m==11){
    printf("Novembro");
}
else if (m==12){
    printf("Dezembro");
}
else {
    printf("Numero do mes invalido!...");
}


system("PAUSE");
 }

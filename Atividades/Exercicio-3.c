#include <stdio.h>
#include <stdlib.h>
 int main() {
     float n1,n2,n3,n4,b1,b2,bt;
printf("Calculadora de media do aluno em dois bimestres.\n");
printf("Digite a nota na primeira prova do primeiro bimestre: ");
scanf("%f",&n1);
printf("Digite a nota do aluno na segunda prova do primeiro bimestre: ");
scanf("%f",&n2);printf("\n");
b1=(n1+n2)/2;
printf("Media do aluno no primeiro bimestre : %.2f\n\n\n",b1);

printf("Digite a nota na primeira prova do segundo bimestre: ");
scanf("%f",&n3);
printf("Digite a nota do aluno na segunda prova do segundo bimestre: ");
scanf("%f",&n4);
b2=(n3+n4)/2;printf("\n");
printf("Media do aluno no segundo bimestre : %.2f\n\n\n",b2);

bt=(b1+b2)/2;
printf("Media do aluno nos dois bimestres : %.2f\n\n",bt);


system("PAUSE");
}

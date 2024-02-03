#include <stdio.h>

int main(){
    int n1,n2,soma,subtr,mult,divi;
    printf("Digite o primeiro valor");
    scanf("%d", &n1);
     printf("Digite o segundo valor");
    scanf("%d", &n2);
    soma=n1+n2;
    subtr=n1-n2;
    mult=n1*n2;
    divi=n1/n2;

     printf("Resultados\n");
      printf("Soma:%d\n",soma);
      printf("subtracao:%d\n",subtr);
      printf("Multiplicacao:%d\n",mult);
      printf("Divisao:%d\n",divi);
}
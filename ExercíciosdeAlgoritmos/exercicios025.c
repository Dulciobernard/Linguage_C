#include <string.h>
/*25) [DESAFIO] Crie um programa que leia o tamanho de três segmentos de reta. 
Analise seus comprimentos e diga se é possível formar um triângulo com essas 
retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento 
de cada lado deve ser menor que a soma dos outros dois. */

int main(){
    float A,B,C,soma;

     printf("Digite o tamanho da recta A:");
     scanf("%f",&A);
     printf("Digite o tamanho da recta B:");
     scanf("%f",&B);
     printf("Digite o tamanho da recta C:");
     scanf("%f",&C);
    
     if (A+B>C && B+C >A && C+A>B)
     {
       printf("O Segmento de recta  forma um  triango:");
     } else
     {
        printf("Nao e possivel formar um triangulo com os segmentos de reta fornecidos.\n");
     }
     
     
}
#include <stdio.h>
       /*
2) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um 
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável 
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente 
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.

*/
int main(void) {
    int a,b,c;
    printf("\nDigite o valor de a:");
    scanf("%d",&a);
    printf("\nDigite o valor de b:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
   
    
     printf("O valor de a: %d\n",a);
     printf("O valor de b: %d",b);
    
    }
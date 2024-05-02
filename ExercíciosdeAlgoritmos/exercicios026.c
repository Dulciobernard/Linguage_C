#include <stdio.h>
/*26) Escreva um algoritmo que leia dois números inteiros e compare-os, mostrando 
na tela uma das mensagens abaixo: 
- O primeiro valor é o maior 
-O segundo valor é o maior 
 - Não existe valor maior, os dois são iguais*/
int main(){
   int n1,n2;
   printf("digite o primeiro numero:");
   scanf("%d",&n1);
   printf("digite o segundo numero:");
   scanf("%d",&n2);

   if (n1 > n2)
   {
    printf("O primeiro valor e o maior");
   }
   else if(n2 > n1){
      printf("O segundo valor e o maior ");
   }else
   {
      printf("Nao existe valor maior, os dois sao iguais");
   }
   
   
}

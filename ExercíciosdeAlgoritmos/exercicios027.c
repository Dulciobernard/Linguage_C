#include <stdio.h>
/*27) Crie um programa que leia duas notas de um aluno e calcule a sua média, 
mostrando uma mensagem no final, de acordo com a média atingida: 
- Média até 4.9: REPROVADO 
- Média entre 5.0 e 6.9: RECUPERAÇÃO 
- Média 7.0 ou superior: APROVADO */
int main(){
   float nota1,nota2,media;
   printf("digite o primeiro numero:");
   scanf("%f",&nota1);
   printf("digite o segundo numero:");
   scanf("%f",&nota2);

   media=(nota1+nota2)/2;

   if (media < 4.9)
   {
    printf("O aluno foi reprovado com a media :%f",media);
   }else if (media >= 5.0 && media < 6.9){
      printf("O aluno foi ao recurso com a media :%f",media);
   }else{
      printf("O aluno Aprovado com a media :%f",media);
   }
   
}
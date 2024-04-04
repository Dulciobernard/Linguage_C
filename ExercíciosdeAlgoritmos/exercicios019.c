#include <stdio.h>

/*19) Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua 
média e mostre na tela. No final, analise a média e mostre se o aluno teve ou 
não um bom aproveitamento (se ficou acima da média 7.0). */

int main(){
    float nota1,nota2,media;
    printf("Digita a primeira nota:");
    scanf("%f",&nota1);
    printf("Digita a segunda nota:");
    scanf("%f",&nota2);
    media=(nota1+nota2)/2;
    if (media >= 7.0)
    {
      printf("Aluno aprovado com  a media:%.2f",media);
    }else{
        printf("Aluno reprovado com a media :%.2f",media);
    }
    
}
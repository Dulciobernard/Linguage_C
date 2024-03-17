#include <stdio.h>
/*5) Faça um programa que leia as duas notas de um aluno em uma matéria e mostre 
na tela a sua média na disciplina*/
int main (){
float nota1,nota2,Media;

printf("Digite a primeira nota:");
scanf("%f",&nota1);
printf("Digite a primeira nota:");
scanf("%f",&nota2);
Media=(nota1+nota2)/2;

printf("A media entre %.2f e %.2f e igual a %.2f",nota1,nota2,Media);

  
}
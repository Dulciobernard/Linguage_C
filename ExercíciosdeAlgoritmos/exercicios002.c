#include <stdio.h>
 /*2) Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boasvindas para ela:
Ex:
Qual é o seu nome? João da Silva
Olá João da Silva, é um prazer te conhecer!*/
int main(void) {
   char nome[100];
    printf("\nQual e o seu nome?");
    scanf("%s",&nome);
    
    printf("Ola %s, e um prazer te conhecer!\n", nome);
}
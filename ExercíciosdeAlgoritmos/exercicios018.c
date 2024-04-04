#include <stdio.h>

/*18) Faça um programa que leia o ano de nascimento de uma pessoa, calcule a idade 
dela e depois mostre se ela pode ou não votar.*/

int main(){
    int ano_de_nascimento,ano_atual=2024,idade;
    printf("Digite o ano do seu nascimento:");
    scanf("%d",&ano_de_nascimento);
    idade=ano_atual-ano_de_nascimento;

    if(idade >= 18){
        printf("POde  votar:%d",idade);
    }else{
          printf("Nao pOde  votar:%d",idade);
    }
}
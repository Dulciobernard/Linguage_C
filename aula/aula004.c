#include <stdio.h>

#define texto"Entrada e saida de dados"
int main(){
    printf("%s\n",texto);
    int idade = 0;
    float altura =0.0;
    char nome[50]= "";

    printf("\nDigite a sua idade:");
    scanf("%d",&idade);

    printf("\nDigite a sua altura:");
    scanf("%f",&altura);
    printf("\nDigite o seu nome:");
    scanf("%s",&nome);

    printf("O %s tem %d idade e %.2f de altura",nome,idade,altura);
}
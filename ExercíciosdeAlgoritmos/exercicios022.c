#include <stdio.h>
/*22) Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua 
situação em relação ao alistamento militar. - Se estiver antes dos 18 anos, mostre em quantos anos faltam para o 
alistamento. - Se já tiver depois dos 18 anos, mostre quantos anos já se passaram do 
alistamento. 
*/

int main (){
    int ano_nascimento,ano_atual=2024,idade;
    printf("Digiteo seu ano de nascimento:");
    scanf("%d",&ano_nascimento);
    idade=ano_atual-ano_nascimento;

    if (idade < 18)
    {
        idade=18 - idade;
        printf("Faltam %d para o alistamento.",idade);
    }else{
        idade=idade - 18;
        printf("Ja se passaram %d para o alistamento.",idade);
    }
    
}
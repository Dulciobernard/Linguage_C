#include <stdio.h>
/*28) Faça um programa que leia a largura e o comprimento de um terreno
retangular, calculando e mostrando a sua área em m². O programa também
devemostrar a classificação desse terreno, de acordo com a lista abaixo:
 - Abaixo de 100m² = TERRENO POPULAR
 - Entre 100m² e 500m² = TERRENO MASTER
 - Acima de 500m² = TERRENO VIP*/

 int main (){
    float largura ,comprimento,area;
    printf("digite a largura :");
    scanf("%f",&largura);
    printf("Digite o comprimento:");
    scanf("%f",&comprimento);
    area=largura*comprimento;
 }
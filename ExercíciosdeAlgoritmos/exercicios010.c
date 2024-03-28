#include <stdio.h>
/*
10) Faça um algoritmo que leia a largura e altura de uma parede, calcule e 
mostre a área a ser pintada e a quantidade de tinta necessária para o serviço, 
sabendo que cada litro de tinta pinta uma área de 2metros quadrados.
*/

int main (){
    float altura ,lagura,area,qdetinta;
    printf("Digite a altura da parede em metros");
    scanf("%f",&altura);
    printf("\nDigite a largura da parede em metros:");
    scanf("%f",&lagura);
    area=altura*lagura;
    qdetinta=area/2;
    
    printf("A area a ser pintada:%f\n",area);
    printf("A quantidade de tinta necessaria:%f",qdetinta);

}
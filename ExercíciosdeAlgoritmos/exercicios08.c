#include <stdio.h>
/*
8) Desenvolva um programa que leia uma distância em metros e mostre os valores 
relativos em outras medidas. 
Ex:  
Digite uma distância em metros: 185.72 
A distância de 85.7m corresponde a: 
0.18572Km 
1.8572Hm 
18.572Dam 
1857.2dm 
18572.0cm 
185720.0mm
*/

int main (){ 
    float m ,km ,hm ,dam ,dm ,cm ,mm;
    
	printf("digite  uma distancia em metro:\n");
    scanf("%f",&m);

    km=m /1000;
    hm = m/100 ;
    dam= m/10 ;
    dm=m*10;
    cm=m*100;
    mm=m*1000;

    printf("%fkm.\n",km);
    printf("%fhm.\n",hm);
    printf("%fdam.\n",dam);
    printf("%fdm.\n",dm);
    printf("%fcm.\n",cm);
    printf("%fmm.\n",mm);
}
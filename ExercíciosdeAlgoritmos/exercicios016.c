#include <stdio.h>
/*
16) [DESAFIO] Escreva um programa para calcular a redução do tempo de vida de um 
fumante. Pergunte a quantidade de cigarros fumados por dias e quantos anos ele 
já fumou. Considere que um fumante perde 10 min de vida a cada cigarro. Calcule 
quantos dias de vida um fumante perderá e exiba o total em dias.
*/
#include <stdio.h>

int main() {
    int cigarros_por_dia, quantidade_de_anos, minutos_por_dia, minutos_por_ano, dias_perdidos;

    printf("Digite a quantidade de cigarros fumados por dia: ");
    scanf("%d", &cigarros_por_dia);

    printf("Digite quantos anos ele já fumou: ");
    scanf("%d", &quantidade_de_anos);

   int minutos_perdido=10;
   int anos=365;
   
   minutos_por_dia=cigarros_por_dia*minutos_perdido;
   minutos_por_ano=quantidade_de_anos*anos;
   dias_perdidos=(minutos_por_dia*minutos_por_ano)/1440;

    printf("O fumante perderá aproximadamente %d dias de vida.\n", dias_perdidos);

    return 0;
}

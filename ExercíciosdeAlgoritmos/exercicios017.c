#include <stdio.h>
/*17) Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 
80Km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse caso, exiba 
o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida. */


int main(){
    float velociade,multa,cal;
    printf("Qual e a velocidade atingida pelo carro:");
    scanf("%f",&velociade);

    if(velociade > 80){
        cal=velociade-80;
        multa=cal*5;
     printf("O valor da multa é: R$%.2f.\n", multa);
    }
    
}
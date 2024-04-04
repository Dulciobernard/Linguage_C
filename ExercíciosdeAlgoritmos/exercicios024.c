#include <string.h>
/*24) Faça um algoritmo que pergunte a distância que um passageiro deseja 
percorrer em Km. Calcule o preço da passagem, cobrando R$0.50 por Km para 
viagens até 200Km e R$0.45 para viagens mais longas. 
*/

int main(){
     float distancia,preco;
     printf("Digite a distancia que deseja percorrer em Km: ");
     scanf("%f", &distancia);

    if (distancia <= 200)
    {
       preco=200*0.50;
    }else{
        preco=200*0.45;
    }
     printf("O preco da passagem e: R$%.2f\n", preco);
}


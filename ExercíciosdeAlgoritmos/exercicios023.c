#include <stdio.h>

/*23) Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontos 
para todos, mas especialmente para mulheres. Faça um programa que leia nome, 
sexo e o valor das compras do cliente e calcule o preço com desconto. Sabendo 
que: - Homens ganham 5% de desconto - Mulheres ganham 13% de desconto*/
int main(){
    char nome[50], sexo;
    float valorCompras, valorDesconto = 0.0;

    // Solicitar informações do cliente#include <string.h>
    printf("Digite o nome do cliente: ");
    fgets(nome, 50, stdin);
    printf("Informe o sexo(f ou m):");
    scanf("%c",&sexo);
    printf("Informe o  valor da compra:");
    scanf("%f",&valorCompras);

    if (sexo == 'f' || sexo == 'F')
    {
        valorDesconto=valorCompras*0.13;
        
    } else {
        valorDesconto = valorCompras * 0.05; // Homens ganham 5% de desconto
    }
    // Exibir recibo com desconto aplicado
    printf("\n*** Recibo ***\n");
    printf("Cliente: %s\n", nome);
    printf("Sexo: %c\n", sexo);
    printf("Valor das compras: R$ %.2f\n", valorCompras);
    printf("Desconto: R$ %.2f\n", valorDesconto);
    printf("Valor total a pagar: R$ %.2f\n", valorCompras - valorDesconto);



}
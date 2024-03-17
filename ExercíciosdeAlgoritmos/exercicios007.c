#include <stdio.h>
/*7) Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a 
sua terça parte. 
Ex:  
Digite um número: 3.5 
O dobro de 3.5 é 7.0 
A terça parte de 3.5 é 1.16666*/


int main(){
    float n,dob,ter;

    printf("\nDigite um numero:");
    scanf("%f",&n);

    dob=n*2;
    ter=n/3;
    printf("O dobro de %.1f e %.1f.\n",n,dob);
    printf("A terca parte de %.1f e %f",n,ter);


}
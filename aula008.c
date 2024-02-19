#include <stdio.h>

int main (){
    float n1,n2,n3;
    float m;
    printf("Digite primeira nota:");
    scanf("%f",&n1);
    printf("Digite segunda nota:");
    scanf("%f",&n2);
    printf("Digite terceira nota:");
    scanf("%f",&n3);
    m=(n1+n2+n3)/3;
    if(m>9){
        printf("Aluno aprovado(a):%f",m);
    }if(m>=6 && m<10){
        printf("O aluno tem direito a fazer o exame.\n");
    }else{
        printf("Aluno Reprovado(a):%f",m);
    }
}
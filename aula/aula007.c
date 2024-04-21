#include <stdio.h>

int main (){
    int n1,n2,n3;
    float m;
    printf("Digite primeira nota:");
    scanf("%d",&n1);
    printf("Digite segunda nota:");
    scanf("%d",&n2);
    printf("Digite terceira nota:");
    scanf("%d",&n3);
    m=(n1+n2+n3)/3;
    if(m>=10){
        printf("Aluno aprovado(a):%f",m);
    }else{
        printf("Aluno Reprovado(a):%f",m);
    }
}
#include <stdio.h>

int main()
{
    int n1, n2, maior, menor;
    int dif;
    printf("Digite um numero:");
    scanf("%d",&n1);
    printf("\nDigite outro numero:");
    scanf("%d",&n2);
     dif=n1-n2;
    if (n1>n2)
    {
        maior=n1;
        menor=n2;
    }else{
        menor=n1;
        maior=n2;
    }
    printf("Maior:%d\n",maior);
    printf("Menor:%d\n",menor);
    printf("A direnca entre %d e %d e:%d",n1,n2,dif);
    

    

    
        

    }
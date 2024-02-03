#include <stdio.h>

int main(void) {
    int dado = 10;
    printf("Dados antes do incremento: %d.\n",dado);
    
    dado++;
     printf("Depois do incremento: %d.\n",dado);

    dado--;
     printf("Depois do decremento: %d.\n",dado);

     dado += 3;
      printf("Depois do incremento em 3 unidades: %d.\n",dado);
    dado -= 2;
      printf("Depois do decremento em 2 unidades: %d.\n",dado);

    dado *= 10;
      printf("Depois de multiplica por 10: %d.\n",dado);

      
}
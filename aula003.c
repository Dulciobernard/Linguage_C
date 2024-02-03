#include <stdio.h>

int main(void) {
  int idade=0;
  int ano_atual, data_nasc;
  printf("Valor inicia da idade :%d.\n",idade);
  printf("\nDigite a tua idade:");
  scanf("%d",&idade);
  
  printf("\nDigite o ano atual:");
  scanf("%d",&ano_atual);
  
  data_nasc=ano_atual-idade;
  printf("\n\nA idade informada foi :%d.\n",idade);
  printf("\nA ano informada foi :%d.\n",ano_atual);
  printf("O cliente nasceu em:%d.\n",data_nasc);
}
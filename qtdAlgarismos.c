#include <stdio.h>

int main(void) {
  int cont = 0;
  int val;
  printf("Informe o valor: ");
  scanf("%d",&val);
  while(val >= 1){
    val/=10;
    cont+=1;
  }
  printf("%d\n", cont);

  return 0;
}
/* Objetivo: Mostrar a metade de um valor numérico de forma recursiva */

#include <stdio.h>

/*Subtraindo valores até o numberEnd*/
int subValores(int numberEnd){
  if(numberEnd == 1){ // Base
    return 1;
  } else{ //Passo indutivo
    return numberEnd - subValores(numberEnd - 1);
  }
}
int main(void) {
  int end;
  scanf("%d", &end);
  printf("valores: %d", subValores(end));

  return 0;
}
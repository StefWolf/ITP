#include <stdio.h>
#include "rastreador.h"

int main(void) {
  
  int contador;
  printf("Rastreador de dados versão %2.f\n", versao);
  printf("Quantos valores está o vetor? ");
  scanf("%d", &contador);
  int vetor[contador];

  printf("\n----- Coloque os valores no vetor ----\n");
  for(int i = 0; i < contador; i++){
    scanf("%d", &vetor[i]);
  }

  printf("Menor valor do vetor: %d\n", encontrarMenor(vetor, contador - 1, vetor[contador-1]));
  printf("Maior valor do vetor: %d\n", encontrarMaior(vetor, contador - 1, vetor[contador-1]));
//vet, i-1, cont
  return 0;
}
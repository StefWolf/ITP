#include "rastreador.h"

int encontrarMenor(int vet[], int i, int cont){
  if(i < 0){
    return cont;
  } else{
    if(vet[i] < cont){ //Verifica se o valor atual é menor que o menor indicado até agora
      cont = vet[i];
    }
    return encontrarMenor(vet, i-1, cont);
  }
}

int encontrarMaior(int vet[], int i, int cont){
  if(i < 0){
    return cont;
  } else{
    if(vet[i] > cont){ //Verifica se o valor atual é maior que o maior indicado até agora
      cont = vet[i];
    }
    return encontrarMaior(vet, i-1, cont);
  }
  
}
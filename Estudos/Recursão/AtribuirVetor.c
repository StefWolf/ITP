#include <stdio.h>
#include <stdlib.h>

/* COMO ATRIBUIR VALORES A UM VETOR DE FORMA RECURSSIVA */

int j; //Vamos criar uma variável global, nesse caso chamei de j

int atribuirValor(int i, float vetor[j]){ //Essa é a função recursiva
  if(i <= 0){ //Agora temos a base
    return 0;
  } else{ //E o passo indutivo
    printf("position %d:", i-1); /*Pra terminar no 0*/
    scanf("%f", &vetor[i-1]);/*Pra terminar no 0*/
    return atribuirValor(i - 1, vetor); //A cada vez que for atribuindo ele volta 1 posição do vetor já que estamos trabalhando com o tamanho máximo até o 0
  }
}


int main(void) {
  printf("Quantidade de valores: ");
  scanf("%d", &j);

  float newVetor[j];

  newVetor[j] = atribuirValor(j, newVetor); //Aqui você chama a função e ela atribui os valores ao newVetor[j].

  printf("--- MOSTRANDO VETOR ---");
  for(int i = 0; i < j; i++){
    printf("->\n (%d) %f", i, newVetor[i]);

  }

  return 0;
}

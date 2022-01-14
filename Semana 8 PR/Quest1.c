#include <stdio.h>
#include <math.h>

// SUM = SOMATÓRIO
// PS. NÃO SE ASSUSTE COM A QUANTIDADE DE COMENTÁRIOS, É DEBUG.


int atribuirValor(int i, float vetor[i]){ //Essa é a função recursiva
  if(i <= 0){ //Agora temos a base
    return 0;
  } else{ //E o passo indutivo
      /*printf("position %d:", i-1); */
      scanf("%f", &vetor[i-1]);
      return atribuirValor(i - 1, vetor); 
  }
}

float Somatorio_Quadrado(int i, float num[i]){ //SUM(x[i]^2)
  if(i < 0){
    return 0;
  } else{
    /*printf("Vai somar o %f\n", num[i]);*/
    return pow(num[i], 2) + Somatorio_Quadrado(i - 1, num); 
  }
  
}

float Somatorio(int i, float num[i]){ //SUMx[i]
  if(i < 0){
    return 0;
  } else{
   /* printf("Vai somar o %f\n", num[i]); */
    return num[i] + Somatorio(i - 1, num);
  }
}

int main(void) {
  
  int i; //Contador

  scanf("%d", &i);
  float  listaN[i]; //Numeração
  listaN[i] = atribuirValor(i, listaN); //atribuindo valores ao vetor

  /*printf("teste %f", listaN[1]); debug: está recebendo vetor*/
  
  

  /*float result = sqrt(Somatorio_Quadrado(i - 1, listaN)/i - pow(2, Somatorio(i - 1, listaN)/i));*/
  float nu = Somatorio(i - 1, listaN)/i;
  /*printf("result pow: %f \n", nu);
  float cp = pow(nu , 2);
  printf("Com pow: %f ", cp); */
  float result = sqrt((Somatorio_Quadrado(i - 1, listaN)/i) - pow(nu , 2)); //Raiz tá certa, divisão tá certa, subtração certa, 

  /* float result = Somatorio_Quadrado(i - 1, listaN) + Somatorio(i - 1, listaN);*/
//Fórmula do desvio padrão: sqrt(SUM(x[i]^2)/n - (SUMx[i]/n)^2))
  printf("%.4f", result);
  return 0;
}
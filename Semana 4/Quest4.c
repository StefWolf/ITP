#include <stdio.h>

int main(){

  int Flor[5][3];
  int SemEstoque = 0;

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 3; j++){
      scanf("%d", &Flor[i][j]);
    }
  }
  for(int i = 0; i < 5; i++){
    int inspecao = Flor[i][1] - Flor[i][2];
    if(inspecao > 0){
      printf("%d %d \n", Flor[i][0], inspecao);
      SemEstoque = SemEstoque + 1;
    }
  }
  if(SemEstoque == 0){
    printf("Estoque Completo");
  }

  return 0;
}

/*Quando o algoritmo foi fácil de fazer, eu não coloco comentários*/
#include <stdio.h>

int calculo_z(int A_x, int A_y, int B_x, int B_y, int Click_x, int Click_y){ /*Função do calculo do z*/
  int z = (A_x - B_x)*(Click_y - B_y) - (A_y - B_y)*(Click_x - B_x);

  return z;
}

int main(void) {
  int n_pontos_figura;
  int n_cliques_mouse;

  scanf("%d", &n_pontos_figura);  /* quantidade N */
  scanf("%d", &n_cliques_mouse);  /* quantidade M*/

  int x_figura[n_pontos_figura];
  int y_figura[n_pontos_figura];
  int x_click[n_cliques_mouse];
  int y_click[n_cliques_mouse];
  char identificador[n_cliques_mouse];

  /* Recolhimento de Dados */

  for(int i = 0; i < n_pontos_figura; i++){
    scanf("%d", &x_figura[i]);
    scanf("%d", &y_figura[i]);
  }
  /*x_figura[n_pontos_figura] = x_figura[0];
  y_figura[n_pontos_figura] = y_figura[0];*/

  for(int i = 0; i < n_cliques_mouse; i++){
    scanf("%s", &identificador[i]);
    scanf("%d", &x_click[i]);
    scanf("%d", &y_click[i]);
  }

  /*x_click[n_cliques_mouse] = x_click[0];
  y_click[n_cliques_mouse] = y_click[0]; */

  /* Processamento e Listagem */

  for(int i = 0; i < n_cliques_mouse; i++){
    int contador = 0;
    for(int j = 1; j < n_pontos_figura; j++){ /*J precisa ser igual a 1 pois irei incrementar o vetor [ i - 1] que irá pegar a posição 0 */
      int result = calculo_z(x_figura[j], y_figura[j], x_figura[j - 1], y_figura[j - 1], x_click[i], y_click[i]);

      if(result > 0){ /* o n for positivo */
        contador = contador + 1; /*Ei!! Tem uma posição à esquerda, ele tá fora! */
      }
    }
    if(contador == 0){ /*Ele tá entro em todas as retas??*/
      printf("%c \n", identificador[i]);
    }

  }
}

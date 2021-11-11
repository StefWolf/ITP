#include <stdio.h>

int distancia_dois_andares(int andar_alpha, int andar_predio, int posicao_alpha, int posicao_predio){
  int distancia_horizontal = posicao_alpha - posicao_predio; /*Distancia horizontal*/
  int distancia_andares = andar_alpha + distancia_horizontal + andar_predio; /*Distancia entre dois andares*/

  return distancia_andares;
}

int main(void) {
  int quantidade_predios;
  int maior_distancia = 0;

  scanf("%d", &quantidade_predios);

  int andares[quantidade_predios];
  

  for(int i = 0; i < quantidade_predios ; i++){ /*Recolhimento em array dos andares dos prédios */
    scanf("%d", &andares[i]);
  }

  andares[quantidade_predios] = andares[0];

  for(int i = 0; i < quantidade_predios; i++){ /*Um de cada testa com todos */
    int andar_alpha = andares[i]; /*Recolhe aquele andar que irá testar todos*/
    int posicao_alpha = i; /*Posicao que alpha se encontra */

  andares[quantidade_predios] = andares[0];

    for(int j = 0; j < quantidade_predios; j++){ /*Todos que serão testados para um de cada */
      int result_temporario = 0;
      int posicao_andar = j; /*Posicao que se encontra os andares */
      result_temporario = distancia_dois_andares(andar_alpha, andares[j], i, j);

      if(result_temporario > maior_distancia){ /*Buscador de maior distancia entre andares gerados*/
        maior_distancia = result_temporario;
      }
      
    }
  }
  printf("%d", maior_distancia);

}
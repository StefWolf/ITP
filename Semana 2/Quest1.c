#include <stdio.h>
#include <math.h>

int testando_clique(int contador, int x_ponto_click, int y_ponto_click){
  int x_ponto_desenho;
  int y_ponto_desenho;
  int d;
  int result = 0;

  for(int i = 0; i < contador; i++){
    x_ponto_desenho = 0;
    y_ponto_desenho = 0;
    scanf("%d", &x_ponto_desenho);
    scanf("%d", &y_ponto_desenho);

    d = sqrt(pow(x_ponto_click - x_ponto_desenho, 2) + pow(y_ponto_click - y_ponto_desenho, 2));

    if(d < 3){ /*3 é a constante do enunciado */
      result = result + 1;
    } 
    
  }
  return result;
  
}

int main(void){
  int x_ponto_click = 0;
  int y_ponto_click = 0;
  int contador = 0;

  scanf("%d", &x_ponto_click);
  scanf("%d", &y_ponto_click);
  scanf("%d", &contador);

  int mostrar_tela = testando_clique(contador, x_ponto_click, y_ponto_click);

  if(mostrar_tela > 0){
    printf("S");
  } else{
    printf("N");
  }

  return 0;
}
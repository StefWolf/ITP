#include <stdio.h>


int verificarPontos(int x_ponto_click, int y_ponto_click, int x_reta_one, int y_reta_one, int x_reta_two, int y_reta_two){

	int equacao_one = (y_ponto_click - y_reta_one);
	double m = (y_reta_two - y_reta_one)/(x_reta_two - x_reta_one);
	int equacao_two =  ((int)m * (x_ponto_click - x_reta_one) + 0.5);
    int result;

	if(equacao_one == equacao_two){
		result = 1;
	} else {
		result = 0;
	}

	return result; 	
}

int main(void) {
      int x, y;
      int contadorN = 0;
      int r = 0;


      scanf("%d", &x); /* Um ponto */
      scanf("%d", &y); /* Outro ponto */
      scanf("%d", &contadorN); /* Contador */
      int x1[contadorN]; /*Pontos (infinitos) das retas */
      int y1[contadorN]; /*Pontos (infinitos) das retas */
   

    for(int i = 0; i < contadorN; i++){ /*Recolher dados para os vetores x e y*/
        scanf("%d", &x1[i]);
        scanf("%d", &y1[i]);
    }
    
    x1[contadorN] = x1[0];
    y1[contadorN] = y1[0];

    for(int i = 0; i < contadorN - 1; i++){
        int resultado = 0;
        resultado = verificarPontos(x, y, x1[i], y1[i], x1[i + 1], y1[i + 1]);
        r = r + resultado; 
		
 }

    if(r > 0){
        printf("S");
      } else{
        printf("N");
      }

    return 0;

}
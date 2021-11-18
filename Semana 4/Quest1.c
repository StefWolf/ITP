#include <stdio.h>

int main(){
    int matriz [3][5];
    int SL[3];
    int contador_soma = 0;
    
    for(int i = 0; i < 3; i++){
        contador_soma = 0;
        for(int j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
            contador_soma = contador_soma + matriz[i][j];
        }
        SL[i] = contador_soma;
    }
    printf("SL = [%d %d %d]", SL[0], SL[1], SL[2]);
    
}
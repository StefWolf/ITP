#include <stdio.h>

int main(){
    int matriz[5][4];
    int CR;
    int maiorCR;
    int Matricula;
    int existeCurso = 0;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]); 
        }
    }
    
    scanf("%d", &CR);

    for(int i = 1; i < 5; i++){
        if(matriz[i][2] == CR){
            if(matriz[i][3] > matriz[i - 1][3]){
                maiorCR = matriz[i][3];
                Matricula = matriz[i][0];
            }  else {
                maiorCR = matriz[i - 1][3];
                Matricula = matriz[i - 1][0];
            }
            existeCurso = existeCurso + 1;
        }
    }
    if(existeCurso != 0){
        printf("CR = %d \nMatricula = %d ", maiorCR, Matricula);
    } else {
        printf("Curso nao existente");
    }
    
    

    return 0;
    
    
}
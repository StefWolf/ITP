#include <stdio.h>

int main(void) {
    int matriz[3][3];
    int matriz_sub[3][3];

    int i;
    for ( i = 0; i < 3; i++){
        int j;
        for ( j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for ( i = 0; i < 3; i++){
        int j;
        for ( j = 0; j < 3; j++){
            matriz_sub[j][2 - i] = matriz[i][j];
        }    
    }
    for ( i = 0; i < 3; i++){
        int j;
        for ( j = 0; j < 3; j++){
            printf("%d ", matriz_sub[i][j]); /*Substituindo matriz antigo por nova */
        }
        printf("\n");        
    }
}
#include <stdio.h>

int main()
{
    char letra = 64;
    int dedos;
    int total = 0;
    
    printf("------------------------JOGO DA ADEDONHA---------------\nVocê só pode utilizar valores de 0 a 10, assim como seus dedos\n");
    for(int i = 0; i < 4; i++){
        printf("Jogador %d digite seu valor: ", i);
        scanf("%d", &dedos);
        if(dedos > 10 || dedos < 0){
            while(dedos > 10 || dedos < 0){
                printf("Jogador %d, você só pode utilizar até 10 dedos, vamos! digite novamente: ", i);
                scanf("%d", &dedos);
            }
        }
        total = total + dedos;
    }
    if (total == 0){
        printf("Ei! Ninguém colocou nada!");
    }
    else if (total > 1 && total <= 26){
        letra = letra + total;
        printf("Letra: %c", letra);
    }
    else if(total > 26){
        total = total - 26;
        letra = letra + total;
        printf("Letra: %c e total: %d", letra, total);
    }
    

    
    return 0;
}
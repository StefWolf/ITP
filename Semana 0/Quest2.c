#include <stdio.h>  
  
int main()  
{  
    int e_s1;
    int e_s2;
    int d_i1;
    int d_i2;
    int p1;
    int p2;

// Dois primeiros são inferiores e dois último são superiores

    scanf("%d", &e_s1);
    scanf("%d", &e_s2);
    scanf("%d", &d_i1);
    scanf("%d", &d_i2);
    scanf("%d", &p1);
    scanf("%d", &p2);
    
    if(e_s1 <= p1 && d_i1 >= p1){
        if(e_s2 <= p2 && d_i2 >= p2){
            printf("Dentro!");
        }
        else{
            printf("Fora!");
        }
    }
    else{
        printf("Fora!");
    }
  
    return 0;  
}
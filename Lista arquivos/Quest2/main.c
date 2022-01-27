#include <stdio.h>

int main(void) {
  char caracter[2];
  int cont = 0;
  FILE *dog;
  dog = fopen("cachorrinho.jpg", "r");
  if(dog == NULL){
  printf("Error ao abrir arquivo");
  } else{


    while(fgets(caracter, 2, dog) != NULL){
      cont++;
      printf("%s", caracter);
      if(cont == 16){ //Sabendo que 2 bytes equivale a 16 bits
        break;
      }
    }  
  }
  fclose(dog);

/* gcc -o main main.c
    ./main 
*/

  return 0;
}
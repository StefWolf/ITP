#include <stdio.h>

void copiarArquivo(FILE *arq1, FILE *arq2){
  char ler[1000]; /* Aqui coloquei um limite de até 1000 caracteres */
  while(fgets(ler, 1000, arq1) != NULL){ // enquanto estiver processando os caracteres...
    fputs(ler, arq2); //passe o que tiver no vetor ler para o arquivo 2 de caractere por caractere 
  }
  printf("Arquivo copiado!");
}

int main(void) {
  char a1[100];
  char a2[100];

  scanf("%s", a1);
  scanf("%s", a2);

  //a2 = a2 + "copia";

  FILE *arquivo1 = fopen(a1, "r");

  if(arquivo1 == NULL){
    printf("Não abriu");
  }

  FILE *arquivo2 = fopen(a2, "w");

  if(arquivo2 == NULL){
    printf("Não foi possível encontrar o caminho do arquivo");
  }

  copiarArquivo(arquivo1, arquivo2);

  fclose(arquivo1);
  fclose(arquivo2);
  
  /* gcc -o main main.c
    ./main 
  */

  return 0;
}
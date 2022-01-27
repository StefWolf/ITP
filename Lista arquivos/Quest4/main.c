#include <stdio.h>
#include <time.h>
#include <string.h>


int main(void) {
  char sair[4];
  struct tm *data_inicio;  /*Hora atual não-brasil*/
  FILE* arquivo; 

  time_t segundos;
  time_t fim;

  time(&segundos);

  data_inicio = localtime(&segundos);
  arquivo = fopen("log.txt", "a");

  fprintf(arquivo, "Data: %d/%d/%d\n", data_inicio->tm_mday, data_inicio->tm_mon+1, data_inicio->tm_year+1900);
  fprintf(arquivo, "Tempo inicial: %d:%d:%d\n", data_inicio->tm_hour, data_inicio->tm_min, data_inicio->tm_sec);
 

  do{
    scanf("%s", sair);
  } while (strcmp(sair, "SAIR") != 0);

  struct tm *data_fim;
  time(&fim);
  data_fim = localtime(&fim);

  fprintf(arquivo, "Tempo final: %d:%d:%d\n", data_fim->tm_hour, data_fim->tm_min, data_fim->tm_sec);

  fclose(arquivo);

  return 0;
}
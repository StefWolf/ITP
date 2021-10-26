#include <stdio.h>

int main(void) {
  int contAnos;
  float indiceAno;
  float media;
  int excluiAno = 0;

  scanf("%d", &contAnos);

  if(contAnos > 0){
    for(int i = 0; i < contAnos; i++){
    float ano = 0;
    scanf("%f", &ano);

      if(ano == -1){
        ano = 0;
        excluiAno = excluiAno + 1;
      }
      else{
        indiceAno = indiceAno + ano ;
      }
    }
    if(contAnos == excluiAno){
      printf("A competicao nao possui dados historicos!");
    }
    else{
      media = indiceAno/(contAnos - excluiAno);
      printf("%.2f", media);
    }
  }
  else{
    printf("A competicao nao possui dados historicos!");
  }

}
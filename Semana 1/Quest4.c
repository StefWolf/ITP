#include <stdio.h>

int main(void) {
  int equipes = 0;
  char inscricoes;
  int iC = 0, iS = 0, iL = 0;

  scanf("%d", &equipes);
  for(int i = 0; i < equipes ; i++){
    inscricoes = 't';
    while(inscricoes != 'F'){
      scanf("%c", &inscricoes);
      if(inscricoes == 'C'){
        iC = iC + 1;
      }
      else if(inscricoes == 'S'){
        iS = iS + 1;
      }
      else if(inscricoes == 'L'){
        iL = iL + 1;
      }
    }
  }
  int total = iC + iS + iL;
  printf("%d %d %d %d", iC, iS, iL, total );

}
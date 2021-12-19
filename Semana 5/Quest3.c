#include <stdio.h>

typedef struct{
  char Nome[200];
  int Vitorias;
  int Empates;
  int Derrotas;
  int GolsFeitos;
  int GolsSofridos;
  /* ---------------- */
  int Pontos;
  int Saldo;
  int Partidas;
}Time;


/* -------Função de leitura---------  */
Time lerTimes(Time times){ /* Parâmetro de tipo Time */
  /* printf("Nome: \n");*/
  scanf("%[^;]%*c", times.Nome); /*SEMPRE USAR PRA STRING */
  /* printf("Vitoria: \n");*/
  scanf("%d", &times.Vitorias);
  /* printf("Empates: \n"); */
  scanf("%d", &times.Empates);
  /* printf("Derrotas: \n"); */
  scanf("%d", &times.Derrotas);
  /* printf("GolsFeitos: \n"); */
  scanf("%d", &times.GolsFeitos);
  /* printf("GolsSofridos: \n"); */
  scanf("%d", &times.GolsSofridos);
  /*----------- Variáveis invisíveis -----------*/
  times.Partidas = times.Vitorias + times.Empates + times.Derrotas;
  times.Saldo = times.GolsFeitos - times.GolsSofridos;
  times.Pontos = times.Vitorias * 3;
  times.Pontos = times.Pontos + times.Empates;

  return times;
}

/* ------- Função de colocação --------*/
/* Código reciclado */
void bubbleSort(Time times[], int T){
  Time novoTime; /* Time auxiliar (Variavel para recolocar valores)*/
  for(int i = 0; i < T; i++){
    for(int j = 0; j < T-1-i; j++){
      if(times[j].Pontos > times[j+1].Pontos){
        novoTime = times[j];
        times[j] = times[j+1];
        times[j+1] = novoTime;
      } else if(times[j].Pontos == times[j+1].Pontos){
          if(times[j].Vitorias > times[j+1].Vitorias){
            novoTime = times[j];
          }
          if(times[j].Vitorias == times[j+1].Vitorias){
            if(times[j].Saldo > times[j+1].Saldo){
              novoTime = times[j];
              times[j] = times[j + 1];
              times[j+1] = novoTime;
            }
          }
      }
    }
  }
}
/* -------------------------- */


/* ----- Função de saída ---------- */

void mostrarTimes(Time times[], int T){ /* T é um contador */
  printf("Tabela do campeonato: \n");
  printf("Nome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols");
  for(int i = T-1; i > -1 ; i--){
    printf("%s| %d| %d|", times[i].Nome, times[i].Pontos, times[i].Partidas);
    printf(" %d| %d| %d|", times[i].Vitorias, times[i].Empates, times[i].Derrotas);
    printf(" %d| %d| %d", times[i].GolsFeitos, times[i].GolsSofridos, times[i].Saldo);
  }
  printf("\n\nTimes na zona da libertadores:");
    for(int i = T-1; i > T-7; i--){
      printf("%s", times[i].Nome);
    }
  printf("\n\nTimes rebaixados:");
    for(int i = 0; i < 4; i++){
      printf("%s", times[i].Nome);
    }
}

/* ----------------- CORPO -----------------------------*/
int main(void) {
  int T; /* Variável contador */
  scanf("%d", &T);

  Time times[T]; /* Lista com T times  */

  for(int i = 0; i < T; i++){
    /*printf("Leia o time %d :\n", i);*/
    times[i] = lerTimes(times[i]); 
  }
  bubbleSort(times, T); /* Organizando colocações... */
  mostrarTimes(times, T);
  

  return 0;
}
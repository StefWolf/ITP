/* #include <stdio.h>

int main(void) {
  float tempoFixo = 0; Tempo limite para a prova
  float atletas = 0; Variação do tempo de cada atleta
  int aptos = 0; Aprovados na prova
  int sessoesTotais = 0; Contagem total de sessoes
  int sessoes = 0; Contagem dinâmica de sessoes

  scanf("%f", &tempoFixo);  vai pegar tempo fixo 
  while(atletas != -1){ Enquanto não digitar -1 ... 
        if(sessoes <= 8){ Se menor ou igual a 8 sessoes (8 raias ocupadas) 
            scanf("%f", &atletas); vai pegar variação do tempo de atletas 
            if(atletas <= tempoFixo){ Se a variação de atletas for menor que tempo fixo 
                aptos = aptos + 1;  Atribua mais um atleta aos aprovados 
                sessoes = sessoes + 1; Conte mais um espaço para ser ocupado na raia 
            }
        }else if(sessoes > 8){ Senão tiver espaço mais na raia (preencher os 8) 
            sessoesTotais = sessoesTotais + 1; Some uma sessão a mais 
            sessoes = 1; Volte a estaca 0 para atribuir valores ao novo conjunto de 8 raias
        }
    }
    
    /*Problema encontrado : Ele só dá uma nova sessaoTotal depois que tiver mais de 8 raias, então ele não dá uma sessaoTotal 1 quando
    mostra que há ao menos 1 apto 


printf("%d %d", aptos - 1, sessoesTotais); Saída dos dados

}  ---------- ERRATA ---------*/

#include <stdio.h>

int main(void) {
  float tempoFixo = 0; 
  float atletas = 0; 
  int aptos = 0; 
  float sessoes = 0;
  float sessoesTotais = 0; 

  scanf("%f", &tempoFixo);
  while(atletas != -1){ 
    scanf("%f", &atletas); 
      if(atletas <= tempoFixo){ 
        aptos = aptos + 1;  
        sessoes = sessoes + 1; 
      }
  }
  if(sessoes > 1){ /*Resolvendo o problema */
    sessoesTotais = 1;
    if(sessoes > 8){
      sessoesTotais = ((sessoes + 1)/8);
    }
  }


printf("%d %.0f", aptos - 1, sessoesTotais); /*Saída dos dados*/

}
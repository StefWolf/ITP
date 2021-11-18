#include <stdio.h>
#include <math.h>

int proporcao(int _quantidade_apostada, int _total_2, int _total_apostado_vencedor){ /*Função para calcular proporção por jogador*/
  int result = round((_total_2 * _quantidade_apostada)/_total_apostado_vencedor);

  return result;
}

int main() {
    int n_jogadores;
	int vencedor;
	int total_1 = 0; /*Total sem valor do petisco */
    int total_2 = 0; /*Total de TUDO */
	int bebidas_e_petiscos = 0;
    int total_apostado_vencedor = 0; 
    int cont = 0; /*Contador Gambiarra: Utilizado para identificar se houve algum apostador que votou no vencedor*/

	scanf("%d", &n_jogadores); /*debugando... */

	int jogador_apostado[n_jogadores];
	int quantidade_apostada[n_jogadores];

	for(int i = 0; i < n_jogadores; i++){ /*Armazenamento de quantidade e jogador por apostador */
		scanf("%d", &quantidade_apostada[i]);
		scanf("%d", &jogador_apostado[i]);
        total_1 = total_1 + quantidade_apostada[i]; /*Recolhendo total de dinheiro apostado */
	}

	scanf("%d", &vencedor); /*Digitando vencedor */
	
/* debug - Até aqui tudo certo */

    bebidas_e_petiscos = round(total_1 * 0.10); /*Valor em porcentagem dos petiscos*/ 

    total_2 = total_1 - bebidas_e_petiscos; /*Retirando o valor do petisco (Será utilizado na função da proporção) */
    
/* debug - Calculo saindo perfeitamente */


  for(int i = 0; i < n_jogadores; i++){  /*Eu quero que ele pegue a soma de todos os valores apostados no vencedor */
    if(jogador_apostado[i] == vencedor){ /*debugando...*/
      total_apostado_vencedor = total_apostado_vencedor + quantidade_apostada[i]; /*opa.. e se for maior que total_2?*/
      cont = cont + 1;
    }
  }
  /* Se não tiver.. */
  if(cont == 0){ /*debugando...*/
    total_apostado_vencedor = total_1;
  }
  /* Agora total apostado nos vencedores tem seu total atribuído, isso será utilizado para a função da proporção */


/* Agora total_1 (TUDO) e total_2 (SEM PETISCO) estão atribuídos */

  printf("Total: R$ %d \n", total_1 );

	for(int i = 0; i < n_jogadores; i++){  /*Listagem dos resultados com função para descobrir os apostadores vencedores */
    if(cont > 0){
      if(jogador_apostado[i] == vencedor){
        int proporcao_apostador = proporcao(quantidade_apostada[i], total_2, total_apostado_vencedor);
        printf("Apostador %d: R$ %d  \n", i + 1, proporcao_apostador);
      }
    } else if(cont == 0){
        int proporcao_apostador = proporcao(quantidade_apostada[i], total_2, total_apostado_vencedor);
        printf("Apostador %d: R$ %d  \n", i + 1, proporcao_apostador);
    }
    

	}
  
	printf("Bebidas e petiscos: R$ %d", bebidas_e_petiscos);
	
    return 0;
}
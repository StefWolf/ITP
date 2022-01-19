//PRIMEIRA TENTATIVA SEM USAR RECURSÃO
#include <stdio.h>

/*
  VERSÃO RECURSIVA DA QUESTÃO 2 LISTA DE RECURSÃO

  Olá, o código tá uma bagunça mas vou explicar aqui:
  Bem... na lógica recursiva desse algoritmo temos a base e o passo indutivo. 
  Nossa base é representado por "else" e somente ele, já nosso passo de recursão 
  serão dividido em dois casos, (já que é matriz), o primeiro caso é (col > i) isso 
  quer dizer que ele continuará no loop enquanto a coluna for maior que o contador i (esse que inicia com 0 pelo parâmetro).
  O mesmo ocorre com o (row > j), que indica que continuará no loop recursivo enquanto a linha for maior que j.
  Sim, o conceito do "i" e "j" estão invertidos, mas isso é porque a comparação está sendo feita por diversas linhas 
  em uma mesma coluna. 

  Enfim, esse algoritmo ainda está com alguns bugs e consequentemente alguns debugs que deixei para ser executado. Até lá,
  espero consertar os problemas. 

  Algoritmo com versão interativa de: Daniel Luan
*/



void find_values(int i, int j, int row, int col, int mat[row][col]){
  printf("\n----Função aberta!-----\n");
  int results[2][col];
  int vMax, vMin; //Estava sendo variável global antes

  if(col > i){ //i vira contador de coluna
    vMin = vMax = mat[0][i];
    if(row > j){ //j vira contador de linha

      if(mat[j][i] <= vMin){
        vMin = mat[j][i];
        /*printf("Mínimo: %d\n", vMin);*/
      } else if(mat[j][i] >= vMax){
          vMax = mat[j][i];
          /*printf("Máximo: %d\n", vMax);*/
      }
    
      if(row - 1 == j){ //Gambiarra para mostrar resultado de coluna por recursão 
        printf("Municipio %d:", i + 1); //Indicar corretamente o município
        printf("%d", vMin);
        printf("%d", vMax);
      }
      
      return find_values(i, j + 1, row, col, mat); //recursão aumentando o j para que ele chegue a ser maior que row

    } else{ //Caso j seja maior que row
      printf("Fechando primeira coluna\n");
      
      
      printf("Municipio %d: %d %d\n", i, results[0][i], results[1][i]);
       //POR ALGUM MOTIVO ELE MORREU AQUI
       return find_values(i+1, j, row, col, mat); //recursão,aumentando o i para chegar a ser maior que o col
    }
    printf("\nVai abrir outra!");
    
  }else{ //Caso i seja maior que col
    return;
  }
}


int main(){
  int n, m; //n : nº regiões | m : nº cidades

  scanf("%d %d", &n, &m);
  int data[n][m];

  //Entrada de dados na matriz
  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
      scanf("%d", &data[i][j]);

  find_values(0, 0, n, m, data);
   
  
  return 0;
}
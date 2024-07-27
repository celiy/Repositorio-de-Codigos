/*
8) Desenvolva um programa que crie uma matriz de tamanho 10x10, que armazena valores booleanos (ou seja, 0 ou 1). Crie um algoritmo que preecha os campos dessa matriz da seguinte forma: assumindo uma célula qualquer, esta será de valor 1 se, e somente se, as células acima e a esquerda forem 0. Caso a célula atual estiver na borda da matriz, considerar os vizinhos inexistentes desta célula como possuindo valor 0.
*/
#include <stdio.h>

void preenchermatriz(int matriz[10][10]){
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      matriz[i][j] = 0;
    }
  }
}

void imprimirmatriz(int matriz[10][10]){
  for (int i=0;i<10;i++){
    for (int j=0;j<10;j++){
      printf("%d",matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

void transmatriz(int matriz[10][10]){
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if (i-1 < 0 && j-1 < 0){
        matriz[i][j] = 1;
      }
      if (i-1 < 0 && matriz[i][j-1] == 0){
        matriz[i][j] = 1;
      }
      if (j-1 < 0 && matriz[i-1][j] == 0){
        matriz[i][j] = 1;
      }
      if (i > 0 && j > 0){
        if (matriz[i-1][j] == 0 && matriz[i][j-1] == 0){
            matriz[i][j] = 1;
        }
      }
    }
  }
}

int empty(){
  int matriz[10][10];

  preenchermatriz(matriz);

  imprimirmatriz(matriz);

  transmatriz(matriz);

  imprimirmatriz(matriz);

  return 0;
}

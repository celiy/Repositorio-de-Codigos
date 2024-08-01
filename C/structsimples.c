#include <stdio.h>
#include <stdlib.h>

//Crie um programa que permita cadastrar pessoas utilizando structs para representar os dados. Pergunte quantas pessoas irão ser cadastradas, depois pergunte o nome, ano de nascimento e peso. Ao final, mostre todas as pessoas cadastradas.

struct Pessoa{
  char nome[50];
  int ano;
  float peso;
};

int main(){
  int quant, n;
  printf("Quantas pesoas deseja cadastrar? ");
  scanf("%d",&quant);
  struct Pessoa pessoas[quant];

  for (n=0;n<quant;n++){
    printf("Insira o nome da pessoa %d: ",n+1);
    scanf("%s",pessoas[n].nome);
    printf("Insira o ano de nasc da pessoa %d: ",n+1);
    scanf("%d",&pessoas[n].ano);
    printf("Insira o peso da pessoa %d: ",n+1);
    scanf("%f",&pessoas[n].peso);
  }
  printf("Dados das pessoas: \n");
  
  for (n=0;n<quant;n++){
    printf("Pessoa: %d \n",n+1);
    printf("Nome: %s \n",pessoas[n].nome);
    printf("Nome: %d \n",pessoas[n].ano);
    printf("Nome: %f \n",pessoas[n].peso);
  }
}
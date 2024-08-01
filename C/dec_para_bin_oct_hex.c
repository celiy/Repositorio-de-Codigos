#include <stdio.h>
#include <stdlib.h>

//Crie um programa que realize a conversão de números decimais para outras bases numéricas (binário, octal e hexadecimal), utilize funções para realizar a conversão de números.

void convertbin(int num){
  int i,j,aux=num;
  int binario[32];
  for(i=0; num>0; i++){
    binario[i]=num%2;
    num/=2;
  }
  printf("O numero %d em binário é: ",aux);
  for(j=i-1; j>=0; j--){
    printf("%d",binario[j]);
  }
  printf("\n");
}

void convertoct(int num){
  int i, j, aux=num;
  int octal[32];
  for (i = 0; num > 0; i++) {
    octal[i] = num % 8;
    num /= 8;
  }
  printf("O numero %d em octal é: ", aux);
  for (j = i - 1; j >= 0; j--) {
    printf("%d", octal[j]);
    }
  printf("\n");
}

void converthex(int num){
  int i, j, aux=num;
  char hexadecimal[32];
  for (i = 0; num > 0; i++) {
    int sobrando = num % 16;
    if (sobrando < 10) {
      hexadecimal[i] = sobrando + '0';
    } else {
      hexadecimal[i] = sobrando - 10 + 'A';
    }
    num /= 16;
  }
  printf("O numero %d em hexadecimal é: ", aux);
  for (j = i - 1; j >= 0; j--) {
    printf("%c", hexadecimal[j]);
  }
  printf("\n");
}

int main(){
  int option, num;
  printf("Deseja realizar qual conversão? ");
  scanf("%d",&option);
  printf("E qual numero deseja converter? ");
  scanf("%d",&num);
  if (option==1){
    convertbin(num);
  } else if (option==2){
    convertoct(num);
  } else {
    converthex(num);
  }
}
#include <stdio.h>
#include <stdlib.h>

//Escreva uma função que conte o número de vogais e consoantes existentes em uma string informada pelo usuário.

void transtring(char* string){
  int sc=0, sv=0, st=0;
  char vogais[5];
  vogais[0] = 'a';
  vogais[1] = 'e';
  vogais[2] = 'i';
  vogais[3] = 'o';
  vogais[4] = 'u';
  
  for (int c=0;string[c] != '\0' ;c++){
    st = 0;
    if (string[c] > 'a' || string[c] < 'z') { 
      for (int n=0;vogais[n] != '\0';n++){
        if (string[c] == vogais[n]){
          sv++;
          st++;
        }
      }
      if (st < 1){
        sc++;
        st=0;
      }
    }
  }
  printf("O numero de vogais é %d e de consoantes é %d", sv, sc);
}

int main(){
  printf("Insira a string: ");
  char string[50]; scanf("%s",string);

  transtring(string);
}
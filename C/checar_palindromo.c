#include <stdio.h>
#include <stdlib.h>

//Sabe-se que uma palavra é um palindromo, quando a ordem das palavras de trás para frente é identico de frente para trás. Portanto, faça um programa que verifique se uma frase lida do usuário é ou não é um palindromo.

void transtring(char* string){
  int n=0, c=0, nep=0;
  char* gnirts = string;
  n = strlen(string);
  
  for (c=0;string[c] != '\0';c++){
    if (gnirts[n-1] != string[c]){
      nep = 1;
      break;
    }
    n--;
  }
  
  if (nep == 1){
    printf("Não é palindromo.");
  } else {
    printf("É palindromo.");
  }
}

int main(){
  printf("Insira a string: ");
  char string[50]; scanf("%s",string);

  transtring(string);
}

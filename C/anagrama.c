#include <stdio.h>
#include <stdlib.h>

//Sabe-se uma palavra é um anagrama de outra palavra, caso a quantidade de letras em cada uma das palavras é identica. Portanto, desenvolva uma função que retorne positivo caso duas palavras sejam anagramas, senão, retorne negativo.

void transtring(char* string1, char* string2){
  int cc=0,nn=0;
  for (int c=0;string1[c] != '\0';c++){
    cc++;
  }
  for (int n=0;string2[n] != '\0';n++){
    nn++;
  }
  if (nn == cc){
    printf("A palavra é um anagrama");
  } else {
    printf("A palavra não é um anagrama");
  }
}

int main(){
  printf("Insira a primeira palavra: ");
  char string1[50]; scanf("%s",string1);
  printf("Insira a primeira palavra: ");
  char string2[50]; scanf("%s",string2);

  transtring(string1,string2);
}

#include <stdio.h>
#include <stdlib.h>

//Esse codigo pega uma string informada pelo usuario e retorna ela com cada caractere da dstring 3 posicoes a frente no alfabeto. Cifra de Cesar.

void func(char* string){
  int asc = 0, c=0, n=0;
  for (c=0;string[c] != '\0' ;c++){
    asc = (int) string[c];
    for (n=0; n<3;n++){
      if (asc == 90){
        asc = 65;     
      } else {
        asc += 1;
      }
    }
    string[c] = (char) asc;
    asc=0;
  }
  printf("A string mudada é: %s", string);
}

int main(){
  char str[20];
  printf("Insira a sua string: ");
  scanf("%s",str);
  func(str);
  return 0;
}
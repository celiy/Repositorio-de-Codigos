#include <stdio.h>
#include <stdlib.h>

//Implemente uma função para achar os primos entre 0 e num

void primo(int num){
  int i, j, primo;
  for(i = 2; i <= num; i++){
    primo = 1;
    for(j = 2; j <= i/2; j++){
      if(i % j == 0){
        primo = 0;
        break;
      }
    }
    if(primo == 1){
      printf("%d ", i);
    }
  }
  printf("\n");
}

int main(){
  printf("Insira o numero: ");
  int num; scanf("%d",&num);

  primo(num);
}

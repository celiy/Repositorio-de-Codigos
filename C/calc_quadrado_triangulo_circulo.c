#include <stdio.h>
#include <stdlib.h>

//Crie um programa que calcule o perímertro de diferentes formas geométricas (quadrado, retângulo e círculo). Peça ao usuário para informar a forma geométrica desejada, depois, peça os valores necessários para o cálculo. Utilize funções.

void calcquadrado(){
  printf("Insira o lado: ");
  int num; scanf("%d",&num);
  printf("O quadrado do lado %d é %d.", num, num*num);
}

void calcretangulo(){
  printf("Insira a base: ");
  int base; scanf("%d",&base);
  printf("Insira a altura: ");
  int alt; scanf("%d",&alt);
  
  printf("O perímetro do retângulo é %d\n", (base*2)+(alt*2));
}

void calccirculo(){
  printf("Insira o tamanho do circulo (cm): ");
  float tam; scanf("%f",&tam);
  
  printf("A area do circulo é: %f cm2", (3.14)*(tam*tam));
}

int main(){
  printf("Deseja realizar qual tipo de calculo? ");
  int opcao; scanf("%d",&opcao);

  if(opcao == 1){
    calcquadrado();
  } else if(opcao == 2){
    calcretangulo();
  } else {
    calccirculo();
  }
}
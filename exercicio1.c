#include <stdio.h>
#include <stdlib.h>

//Quest�o da prova, 1: Fa�a um algoritmo tenha uma fun��o que � chamada duas vezes e que pe�a um numero inteiro positivo e mostre se o numero � perfeito ou n�o.

void func(){

    int num, x=0, i=1;

    while(i == 1){
        printf("Insira o num: ");
        scanf("%d",&num);
        if (num > 0){
            i = 0;
        } else {
            printf("Valor invalido! \n");
            i = 1;
        }
    }

    printf("Divisores: \n");
    for (int n=1;n<=num;n++){
        if (num % n == 0 && num != n){
            printf("%d ",n);
            x+=n;
        }
    }

    printf("\n");
    if (x==num){
        printf("O valor inserido (%d) eh perfeito pois a soma da: %d",num, x);
    } else {
        printf("O valor inserido (%d) nao eh perfeito pois a soma eh: %d",num,x);
    }
    printf("\n");

}

int main()
{
    func();
    func();

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

//Questão da prova, 2: Faça um algoritmo tenha uma função que é chamada duas vezes e que peça um numero inteiro positivo e mostre o MMC de ambos os numeros.

int num[2];

void func(int p){

    int i=1, div1, div2;

    while(i == 1){
        if (p == 0){
            printf("Insira o num 1: ");
            scanf("%d",&num[0]);
        } else {
            printf("Insira o num 2: ");
            scanf("%d",&num[1]);
        }
        if (num > 0){
            i = 0;
        } else {
            printf("Valor invalido! \n");
            i = 1;
        }
    }

    if (p == 1){
        for (int n=1;n<=num;n++){
            if (num[0] % n == 0 && num[0] != n){
                div1=n;
                for (int m=1;m<=num;m++){
                    if (num[1] % m == 0 && num[1] != m){
                        if(div1 == m){
                            div2 = m;
                        }
                    }
                }
            }
        }
        printf("\nO MDC de %d e %d eh: %d \n",num[0],num[1],div2);
        printf("\n");
    }
}

int main()
{

    func(0);
    func(1);

    return 0;
}

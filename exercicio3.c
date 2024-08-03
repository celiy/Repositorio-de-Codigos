#include <stdio.h>
#include <stdlib.h>

//Questão da prova, 3: Faça um algoritmo que escaneie uma lista de 10 numeros para o usuario e passe esta lista para uma função usando parametros que faça a soma dos numeros positivos.

void func(int* lista){

    int soma=0;

    printf("Numeros da lista: \n");
    for(int n=0;n<10;n++){
        printf("%d ",lista[n]);
    }

    for (int n=0;n<10;n++){
        if (lista[n] % 2 == 0){
            soma += lista[n];
        }
    }
    printf("\nA soma dos numeros pares na lista eh: %d ",soma);
}

int main()
{

    int lista[10];

    for(int n=0;n<10;n++){
        printf("Insira o numero %d na lista: ",n+1);
        scanf("%d",&lista[n]);
    }
    func(lista);

    return 0;
}

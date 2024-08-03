#include <stdio.h>
#include <stdlib.h>

//Questão da prova, 4: faça um algortimo que conte o numero de palavras em uma string inserida pelo usuario.

#define TAM 100

int main()
{

    char string[TAM];
    int letras=0, palavras=0;

    printf("Insira a frase: ");
    fgets(string,TAM,stdin);

    printf("A string inserida foi: %s \n",string);

    for (int c=0;string[c] != '\0';c++){
        if (string[c] != ' ' && string[c] != '\n'){
            letras++;
        } else if (letras >= 1 && (string[c] == ' ' || string[c] == '\n')) {
            palavras++;
            letras=0;
        }
    }

    printf("O numero de palavras eh: %d", palavras);

    return 0;
}

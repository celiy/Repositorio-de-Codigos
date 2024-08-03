#include <stdio.h>
#include <stdlib.h>

////Questão da prova, 5: faça um algortimo que ache a maior palavra em uma string inserida pelo usuario. Se uma palavra for do mesmo tamanho que a maior palavra inserida, o resultado deve ser a maior palavra que apareceu primeiro.

#define TAM 100

int main()
{

    char string[TAM], palavra[TAM], maiorp[TAM];
    int x=0, z=0, tamp=0;

    printf("Insira a frase: ");
    fgets(string,TAM,stdin);

    printf("A string inserida foi: %s \n",string);

    for (int c=0;string[c] != '\0';c++){
        if (string[c] != ' ' && string[c] != '\n'){
            palavra[x]=string[c];
            x++;
        } else if (x >= 1 && (string[c] == ' ' || string[c] == '\n')) {
            if (z == 0){
                for (int n=0;palavra[n] != '\0';n++){
                    maiorp[n]=palavra[n];
                }
                tamp=x;
                x=0;
                z=1;
            } else {
                if (x>tamp){
                    for (int n=0;palavra[n] != '\0';n++){
                        maiorp[n]=palavra[n];
                    }
                    tamp=x;
                    x=0;
                }
                x=0;
            }
        }
    }

    printf("A maior palavra eh: %s", maiorp);

    return 0;
}

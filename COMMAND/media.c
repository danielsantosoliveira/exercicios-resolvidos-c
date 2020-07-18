#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[]) {
    float media, soma;
    for (int x = 1; x < argc; x++){
        soma += atof(argv[x]);
    }
    media = soma / (argc - 1);
    printf("Media= %.1f", media);
}


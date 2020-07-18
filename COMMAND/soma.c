#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[]) {
    int soma;

    if  (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h'){
        printf("Sintaxe:soma <v1> <v2> <v3> ... <vn>");
    } else if (argc == 1){
        printf("Faltam parametros");
    } else {
        for (int x = 1; x < argc; x++){
                soma += atoi(argv[x]);
        }
        printf("Soma: %d", soma);
    }
}

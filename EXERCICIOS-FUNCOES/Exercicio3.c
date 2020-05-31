// Exercício 3 - Lista Funções
#include <stdio.h>
#include <stdlib.h>
int ex3 (int n);

int main(){
    int n, op;
    do {
        printf("Exercicio 3 - Divisores - Lista Funcoes\n Informe um numero inteiro positivo:");
        scanf("%d", &n);
        printf("Numero de divisores de %d = %d", n, ex3(n));
        printf("\nDeseja executar novamente?\n 0 - Nao\n 1 - Sim\n");
        scanf("%d", &op);
    } while(op == 1);
    return 0;
}

int ex3(int n){
    int resultado = 0;
    for (int x = 1; x <= 10; x++){
        if ( n%x == 0 )
            resultado += 1;
    }
    return resultado;
}
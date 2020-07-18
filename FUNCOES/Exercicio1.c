// Exercício 1 - Lista Funções
#include <stdio.h>
#include <stdlib.h>
int ex1 (int m);

int main(){
    int m, op;
    do {
        printf("Exercicio 1 - Numero primo - Lista Funcoes\n Informe um número inteiro positivo:");
        scanf("%d", &m);
        printf("Resultado: %d", ex1(m));
        printf("\nDeseja executar novamente?\n 0 - Nao\n 1 - Sim\n");
        scanf("%d", &op);
    } while(op == 1);
    return 0;
}

int ex1 (int m){
    int x = m;
    if ((x > 1) && (x%x == 0)){
        if (x == 2){
            return 1;
        } else{
            for(int y=2; y<x; y++){
                if (x%y == 0){
                    return 0;
                    break;
                }else{
                    return 1;
                }
            }
        }
    } else {
        return 0;
    }
}
// Exercício 2 - Lista Funções
#include <stdio.h>
#include <stdlib.h>
int primo (int m);
int ex2 (int n);

int main(){
    int n, op;
    do {
        printf("Exercicio 2 - Soma numero(s) primo - Lista Funcoes\n Informe um numero inteiro nao-negativo:");
        scanf("%d", &n);
        printf("Resultado: %d", ex2(n));
        printf("\nDeseja executar novamente?\n 0 - Nao\n 1 - Sim\n");
        scanf("%d", &op);
    } while(op == 1);
    return 0;
}
int primo (int m){
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

int ex2 (int n){
    int resultado = 0;
    for (int x = 2; x <= n; x++){
        if (primo(x)){
            resultado += x;
        }
    }
    return resultado;
}
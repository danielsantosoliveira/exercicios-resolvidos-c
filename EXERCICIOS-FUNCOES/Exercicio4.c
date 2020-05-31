// Exercício 4 - Lista Funções

#include <stdio.h>
#include <stdlib.h>
int exe4 (float x, float y, float z);

int main(){
    int op, resp;
    float x, y, z;
    do {
        printf("Exercicio 4 - Triangulo - Lista Funcoes\n Informe 3 valores reais para validar se eh um triangulo:\n");
        scanf("%f", &x);
        scanf("%f", &y);
        scanf("%f", &z);
        fflush(stdin);
        resp = exe4(x,y,z);
        if (resp == 0){
            printf("%.1f - %.1f - %.1f | nao formam um TRIANGULO.", x, y, z);
        } else if (resp == 1) {
            printf("%.1f - %.1f - %.1f | formam um triangulo EQUILATERO.", x, y, z);
        } else if (resp == 2){
            printf("%.1f - %.1f - %.1f | formam um triangulo ISOSCELES.", x, y, z);
        } else{
            printf("%.1f - %.1f - %.1f | formam um triangulo ESCALENO.", x, y, z);
        }
        printf("\nDeseja executar novamente?\n 0 - Nao\n 1 - Sim\n");
        scanf("%d", &op);
    } while(op == 1);
    return 0;
}

int exe4(float x, float y, float z){
    if ((x + y) < z || (y + z) < x || (x + z) < y || (x == 0 && y == 0 && z == 0)){
        return 0;
    } else {
        if (x == y == z){
            return 1; // Equilátero
        }else if (x != y != z) {
            return 2; // Isósceles
        } else {
            return 3; // Escaleno
        }
    }
}
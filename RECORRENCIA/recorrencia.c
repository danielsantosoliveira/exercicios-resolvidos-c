#include <stdio.h>
#define pi 3.1415

int main( ) {
    int op;
    do {
        int x, i = 2, ver=0;
        float R = 0, soma = 0, a = 1, b = 1;
        printf("Informe um Angulo em Graus: ");
        scanf("%d", &x);
        R = x * (pi/180);
        do {
            soma = soma + a/b;
            a = a * (-(R * R));
            b = (2*i-2) * (2*i-3) * b; // B está recebendo zero na primeira passagem, não pode.
            i = i + 1;
        } while (i <= 5);

        ver = soma*10000;
        printf("\nVer: %d", ver);

        if (ver % 10 == 6){
            soma = (soma * 10000 - 2) / 10000;
        } else if (ver % 10 == 7) {
            soma = (soma * 10000 + 3) / 10000;
        } else if (ver == 8) {
            soma = (soma * 10000 + 2) / 10000;
        } else if (ver == 9) {
            soma = (soma * 10000 + 1) / 10000;
        }
        printf("\nResultado: %.3f", soma);

    printf("\nDeseja executar novamente?\n>1 - Sim\n>0 - Nao\n");
    scanf("%d", &op);

    } while (op != 0);
    return 0;
}
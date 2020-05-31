#include <stdio.h>
#include <stdlib.h>

int main (){
    int op;
    do {
        int a = 0, x = 0, y = 0, N = 0, tamMatriz = 0;
        char vetLetras [56] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

        scanf("%d", &N);
        tamMatriz = N*2 + 1;

        char matriz [tamMatriz][tamMatriz];

        for(int x = 0; x < tamMatriz; x++)
            for(int y = 0; y < tamMatriz; y++) matriz[x][y] = '0';

        matriz [N][N] = '*';

        for (a = 0; a < N; a++){

              for (x=a; x+a < tamMatriz; x++){ // Preencher o vetor y = 0,x = 0 até y = 0,x = n-1
                    if (matriz[x][a]== '*') continue;
                    else matriz[x][a] = vetLetras[a];
              }

              for (x=a; x+a < tamMatriz; x++){ // Preencher o vetor y = -1,x = 0 até y = -1,x = n-1
                  if (matriz[x][a]== '*') continue;
                  else matriz[x][(tamMatriz-1)-a] = vetLetras[a]; 
              }

              for (y=a+1; y+a < tamMatriz; y++){ // Preencher o vetor y = 0,x = 0 até y = n-1,x = -1
                    if (matriz[x][a]== '*') continue;
                    else matriz[a][y] = vetLetras[a];
              }

              for (y=a+1; y+a < tamMatriz; y++){ // Preencher o vetor y = 0,x = -1 até y = n-1,x = -1
                    if (matriz[x][a]== '*') continue;
                    else matriz[(tamMatriz-1)-a][y] = vetLetras[a];
              }
        }

        for(int x = 0; x < tamMatriz; x++){
            for(int y = 0; y < tamMatriz; y++){
                printf("%c ", matriz[x][y]);
            }
            printf("\n");
        }
    printf("\nDeseja executar novamente?\n>1 - Sim\n>0 - Nao\n");
    scanf("%d", &op);

    } while (op != 0);
    return 0;
}
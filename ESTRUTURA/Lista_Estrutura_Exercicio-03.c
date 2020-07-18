//Em construção... código incompleto.

#include <stdio.h>
#include <stdlib.h>

struct hm {
    int horas;
    int minutos;
};

struct hm converte(int minutos);

int main()
{
    struct hm tempo;
    int minutos=0;
    printf("Informe o(s) Minuto(s):");
    scanf("%d",&minutos);
    tempo = converte(minutos);
    printf("Resultado: %d hora(s) e %d minuto(s)", tempo.horas,tempo.minutos);
}

struct hm converte(int minutos){
    struct hm tempo;
    tempo.horas = minutos/60;
    tempo.minutos = minutos%60;
    return tempo;
}

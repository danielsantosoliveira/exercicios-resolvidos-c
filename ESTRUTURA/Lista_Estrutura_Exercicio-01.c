//Em construção... código incompleto.

#include <stdio.h>
#include <stdlib.h>
int validaData(int, int, int);


struct dma {
    int dia;
    int mes;
    int ano;
    };

struct dma fim_evento(struct dma datainicio, int duracao);

int main() {
    int op;
    struct dma datainicio, datafim;
    int dia, mes, ano, dias, duracao;
    do {
        printf("Entre com uma data (VALIDA) de inicio do evento (dd/mm/aaaa):");
        scanf("%d/%d/%d", &dia,&mes,&ano);
        op = validaData(dia, mes, ano);
    } while(op == 0);
    do{
        printf("Entre com a duracao em dias > que ZERO:");
        scanf("%d", &dias);
    } while (dias < 1);
    datainicio.dia=dia;
    datainicio.mes=mes;
    datainicio.ano=ano;
    datafim = fim_evento(datainicio,dias);
    printf("Data Final do Evento: %d/%d/%d", datafim.dia,datafim.mes,datafim.ano);
}

struct dma fim_evento(struct dma datainicio, int duracao){
    struct dma datafim;
    datafim.dia = datainicio.dia + duracao;
    if ((datainicio.ano % 4 == 0 && datainicio.ano % 100 != 0 ) || datainicio.ano % 400 == 0) {
        if (datainicio.mes % 2 == 0){
            if (datainicio.mes == 02){
                if (datafim.dia > 29){
                    datafim.dia = datafim.dia -29;
                    datainicio.mes = datainicio.mes + 1;
                }
            } else {
                datafim.dia = datafim.dia -30;
                datainicio.mes = datainicio.mes + 1;
            }
        } else {
            datafim.dia = datafim.dia -31;
            datainicio.mes = datainicio.mes + 1;
        }
    } else {
        if (datainicio.mes % 2 == 0){
            if (datainicio.mes == 02){
                if (datafim.dia > 28){
                    datafim.dia = datafim.dia -28;
                    datainicio.mes = datainicio.mes + 1;
                }
            } else {
                datafim.dia = datafim.dia -30;
                datainicio.mes = datainicio.mes + 1;
            }
        } else {
            datafim.dia = datafim.dia -31;
            datainicio.mes = datainicio.mes + 1;
        }
    }
    datafim.mes = datainicio.mes;
    if (datafim.mes > 12)
    {
        datafim.mes = datafim.mes -12;
        datainicio.ano =datainicio.ano +1;
    }
    datafim.ano = datainicio.ano;
    return datafim;
}

int validaData(int dd, int mm, int aaaa){
    int op = 1;
    if ((aaaa % 4 == 0 && aaaa % 100 != 0 ) || aaaa % 400 == 0) {
        if (mm % 2 == 0){
            if (mm == 02){
                if (dd > 29) op = 0;
            } else {
                if (dd > 30) op = 0;
            }
        } else {
            if (dd > 31) op = 0;
        }
    } else {
        if (mm % 2 == 0){
            if (mm == 02){
                if (dd > 28) op = 0;
            } else {
                if (dd > 30) op = 0;
            }
        } else {
            if (dd > 31) op = 0;
        }
    }
    return op;
}


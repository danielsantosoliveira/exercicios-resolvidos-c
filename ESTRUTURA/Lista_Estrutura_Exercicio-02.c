//Em construção... código incompleto.

#include <stdio.h>
#include <stdlib.h>
int validaData(int, int, int);
int validaDataMaior(int, int, int, int, int, int);
int validaBissexto(int);

struct dma {
    int dia;
    int mes;
    int ano;
    };

struct dma tempo_evento(struct dma datainicio, struct dma datafim);

int main() {
    int op1, op2;
    struct dma datainicio, datafim, tempoevento;
    int dia1, mes1, ano1, dia2, mes2, ano2;
    do {
        printf("Entre com uma data (VALIDA) de inicio do evento (dd/mm/aaaa):");
        scanf("%d/%d/%d", &dia1,&mes1,&ano1);
        op1 = validaData(dia1, mes1, ano1);
    } while(op1 == 0);
    datainicio.dia=dia1;
    datainicio.mes=mes1;
    datainicio.ano=ano1;
    do {
        printf("Entre com uma data (VALIDA) de fim do evento (> que a data inicio) (dd/mm/aaaa):");
        scanf("%d/%d/%d", &dia2,&mes2,&ano2);
        op1 = validaData(dia2, mes2, ano2);
        op2 = validaDataMaior(dia1, dia2, mes1, mes2, ano1, ano2);
    } while(op1 == 0 || op2 == 0);
    datafim.dia=dia2;
    datafim.mes=mes2;
    datafim.ano=ano2;
    tempoevento = tempo_evento(datainicio,datafim);
    printf("Tempo do evento em dias: %d dias", tempoevento.dia);
}

struct dma tempo_evento(struct dma datainicio, struct dma datafim){
    int diasAno1, diasAno2, diasMes1, diasMes2, dias1, dias2;
    struct dma tempoevento;
    if (validaBissexto(datainicio.ano)){
        diasAno1 = datainicio.ano * 366;
        if (datainicio.mes % 2 == 0){// meses pares somar 30 dias
            if (datainicio.mes == 02){
                diasMes1 = 31 + 29;
            } else if (datainicio.mes == 04) {
                diasMes1 = (2*31) + 29 + 30;
            } else if (datainicio.mes == 06) {
                diasMes1 = (3*31) + 29 + (2*30);
            } else if (datainicio.mes == 08) {

            } else if (datainicio.mes == 10) {

            } else {

            }
        } else { // meses impares somar 31 dias
            if (datainicio.mes == 01){

            } else if (datainicio.mes == 03) {

            } else if (datainicio.mes == 05) {

            } else if (datainicio.mes == 07) {

            } else if (datainicio.mes == 09) {

            } else {

            }
        }

    } else {
        diasAno1 = datainicio.ano * 365;
    }
    if ((datafim.ano % 4 == 0 && datafim.ano % 100 != 0 ) || datafim.ano % 400 == 0) {
        diasAno1 = datafim.ano * 366;
    }else {
        diasAno1 = datafim.ano * 365;
    }
    aux1 = (datafim.mes - datainicio.mes)*30;
    aux2 = (datainicio.dia - datafim.dia);
    if ((datainicio.ano % 4 == 0 && datainicio.ano % 100 != 0 ) || datainicio.ano % 400 == 0) {
        if (datainicio.mes % 2 == 0){
            if (datainicio.mes == 02){
                diasMes1 =
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

    if ((aaaa % 4 == 0 && aaaa % 100 != 0 ) || aaaa % 400 == 0) {
        if (mm % 2 == 0){
            if (mm == 02){

            } else {

            }
        } else {

        }
    } else {
        if (mm % 2 == 0){
            if (mm == 02){

            } else {

            }
        } else {

        }
    }
    tempoevento.dia = diasAno1-diasAno1;
    aux1 = (datafim.mes - datainicio.mes)*30;
    aux2 = (datainicio.dia - datafim.dia);
    tempoevento.dia = tempoevento.dia + (aux1-aux2);
    return tempoevento;
    }
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

int validaDataMaior(int dd1, int dd2, int mm1, int mm2, int aaaa1, int aaaa2){
    int op = 1;
    if (aaaa2 < aaaa1) op = 0;
    else if (mm2 < mm1) op = 0;
    else if (dd2 < dd1 && mm1 == mm2) op = 0;
    return op;
}

int validaBissexto(int aaaa){
    op = 0;
    if (aaaa % 4 == 0 && aaaa % 100 != 0 ) || aaaa % 400 == 0) op = 1;
}

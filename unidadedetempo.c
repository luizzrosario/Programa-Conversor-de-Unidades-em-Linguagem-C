#include <stdio.h>

#define SEGUNDOS 1
#define MINUTOS 60
#define HORAS 3600
#define DIAS 86400

#define CODIGO_SEGUNDOS 1
#define CODIGO_MINUTOS 2
#define CODIGO_HORAS 3
#define CODIGO_DIAS 4

// Declaração das funções
float conversor_unidade_tempo(int unidade_atual, int unidade_escolhida, float valor_atual);
int codigo_de_unidade_de_medida_valido(int codigo);

// Declaração das funções de conversão
float converter_segundos_para_minutos(float valor_segundos);
float converter_segundos_para_horas(float valor_segundos);
float converter_segundos_para_dias(float valor_segundos);
float converter_minutos_para_segundos(float valor_minutos);
float converter_minutos_para_horas(float valor_minutos);
float converter_minutos_para_dias(float valor_minutos);
float converter_horas_para_segundos(float valor_horas);
float converter_horas_para_minutos(float valor_horas);
float converter_horas_para_dias(float valor_horas);
float converter_dias_para_segundos(float valor_dias);
float converter_dias_para_minutos(float valor_dias);
float converter_dias_para_horas(float valor_dias);

int main() {

    int unidade_atual, unidade_escolhida, sair;
    float valor_atual, valor_convertido;

    do {

        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor_atual);

        printf("Em qual unidade de tempo esse valor está?\n[1] Segundos\n[2] Minutos\n[3] Horas\n[4] Dias\nEscolha: ");
        scanf("%d", &unidade_atual);

        if (!(codigo_de_unidade_de_medida_valido(unidade_atual))) {
            printf("Valor inválido, reiniciando.\n");
            continue;
        }

        printf("Em qual unidade de tempo você quer converter?\n[1] Segundos\n[2] Minutos\n[3] Horas\n[4] Dias\nEscolha: ");
        scanf("%d", &unidade_escolhida);

        if (!(codigo_de_unidade_de_medida_valido(unidade_escolhida))) {
            printf("Valor inválido, reiniciando.\n");
            continue;
        }

        valor_convertido = conversor_unidade_tempo(unidade_atual, unidade_escolhida, valor_atual);

        printf("O valor convertido é: %.2f\n", valor_convertido);

        printf("Digite 1 caso deseje sair: ");
        scanf("%d", &sair);

    } while (sair != 1);

    return 0;
}

// Função para verificar se o usuário digitou um código válido
int codigo_de_unidade_de_medida_valido(int codigo) {

    switch (codigo) {
        case CODIGO_SEGUNDOS:
        case CODIGO_MINUTOS:
        case CODIGO_HORAS:
        case CODIGO_DIAS:
            return 1;
        default:
            return 0;
    }
}

// Função principal para chamar as auxiliares de conversão
float conversor_unidade_tempo(int unidade_atual, int unidade_escolhida, float valor_atual) {

    float valor_convertido;

    if (unidade_atual == CODIGO_SEGUNDOS && unidade_escolhida == CODIGO_MINUTOS) {
        valor_convertido = converter_segundos_para_minutos(valor_atual);
    } else if (unidade_atual == CODIGO_SEGUNDOS && unidade_escolhida == CODIGO_HORAS) {
        valor_convertido = converter_segundos_para_horas(valor_atual);
    } else if (unidade_atual == CODIGO_SEGUNDOS && unidade_escolhida == CODIGO_DIAS) {
        valor_convertido = converter_segundos_para_dias(valor_atual);
    } else if (unidade_atual == CODIGO_MINUTOS && unidade_escolhida == CODIGO_SEGUNDOS) {
        valor_convertido = converter_minutos_para_segundos(valor_atual);
    } else if (unidade_atual == CODIGO_MINUTOS && unidade_escolhida == CODIGO_HORAS) {
        valor_convertido = converter_minutos_para_horas(valor_atual);
    } else if (unidade_atual == CODIGO_MINUTOS && unidade_escolhida == CODIGO_DIAS) {
        valor_convertido = converter_minutos_para_dias(valor_atual);
    } else if (unidade_atual == CODIGO_HORAS && unidade_escolhida == CODIGO_SEGUNDOS) {
        valor_convertido = converter_horas_para_segundos(valor_atual);
    } else if (unidade_atual == CODIGO_HORAS && unidade_escolhida == CODIGO_MINUTOS) {
        valor_convertido = converter_horas_para_minutos(valor_atual);
    } else if (unidade_atual == CODIGO_HORAS && unidade_escolhida == CODIGO_DIAS) {
        valor_convertido = converter_horas_para_dias(valor_atual);
    } else if (unidade_atual == CODIGO_DIAS && unidade_escolhida == CODIGO_SEGUNDOS) {
        valor_convertido = converter_dias_para_segundos(valor_atual);
    } else if (unidade_atual == CODIGO_DIAS && unidade_escolhida == CODIGO_MINUTOS) {
        valor_convertido = converter_dias_para_minutos(valor_atual);
    } else if (unidade_atual == CODIGO_DIAS && unidade_escolhida == CODIGO_HORAS) {
        valor_convertido = converter_dias_para_horas(valor_atual);
    } else {
        valor_convertido = valor_atual;
    }

    return valor_convertido;
}

// Funções auxiliares de conversão

float converter_segundos_para_minutos(float valor_segundos) {
    return valor_segundos / MINUTOS;
}

float converter_segundos_para_horas(float valor_segundos) {
    return valor_segundos / HORAS;
}

float converter_segundos_para_dias(float valor_segundos) {
    return valor_segundos / DIAS;
}

float converter_minutos_para_segundos(float valor_minutos) {
    return valor_minutos * MINUTOS;
}

float converter_minutos_para_horas(float valor_minutos) {
    return valor_minutos / MINUTOS;
}

float converter_minutos_para_dias(float valor_minutos) {
    return valor_minutos / (DIAS / MINUTOS);
}

float converter_horas_para_segundos(float valor_horas) {
    return valor_horas * HORAS;
}

float converter_horas_para_minutos(float valor_horas) {
    return valor_horas * MINUTOS;
}

float converter_horas_para_dias(float valor_horas) {
    return valor_horas / 24;
}

float converter_dias_para_segundos(float valor_dias) {
    return valor_dias * DIAS;
}

float converter_dias_para_minutos(float valor_dias) {
    return valor_dias * (DIAS / MINUTOS);
}

float converter_dias_para_horas(float valor_dias) {
    return valor_dias * 24;
}

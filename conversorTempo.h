#include <stdio.h>

#define SEGUNDO 1
#define MINUTO 60
#define HORA 3600
#define DIA 86400

#define CODIGO_SEGUNDO 1
#define CODIGO_MINUTO 2
#define CODIGO_HORA 3
#define CODIGO_DIA 4

// Declaração das funções
void conversorTempo();
float conversor_unidade_tempo(int unidade_atual, int unidade_escolhida, float valor_atual);
int codigo_de_unidade_de_medida_valido(int codigo);

// Declaração das funções de conversão
float converter_segundo_para_minuto(float valor_segundo);
float converter_segundo_para_hora(float valor_segundo);
float converter_segundo_para_dia(float valor_segundo);
float converter_minuto_para_segundo(float valor_minuto);
float converter_minuto_para_hora(float valor_minuto);
float converter_minuto_para_dia(float valor_minuto);
float converter_hora_para_segundo(float valor_hora);
float converter_hora_para_minuto(float valor_hora);
float converter_hora_para_dia(float valor_hora);
float converter_dia_para_segundo(float valor_dia);
float converter_dia_para_minuto(float valor_dia);
float converter_dia_para_hora(float valor_dia);

void conversorTempo() {
    int unidade_atual, unidade_escolhida, sair;
    float valor_atual, valor_convertido;

    do {
        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor_atual);

        printf("Em qual unidade de tempo esse valor está?\n");
        printf("[1] Segundo\n[2] Minuto\n[3] Hora\n[4] Dia\nEscolha: ");
        scanf("%d", &unidade_atual);

        if (!codigo_de_unidade_de_medida_valido(unidade_atual)) {
            printf("Código de unidade inválido. Tente novamente.\n");
            continue;
        }

        printf("Para qual unidade de tempo você quer converter?\n");
        printf("[1] Segundo\n[2] Minuto\n[3] Hora\n[4] Dia\nEscolha: ");
        scanf("%d", &unidade_escolhida);

        if (!codigo_de_unidade_de_medida_valido(unidade_escolhida)) {
            printf("Código de unidade inválido. Tente novamente.\n");
            continue;
        }

        valor_convertido = conversor_unidade_tempo(unidade_atual, unidade_escolhida, valor_atual);
        printf("O valor convertido é: %.2f\n", valor_convertido);

        printf("Digite 1 caso deseje sair: ");
        scanf("%d", &sair);
    } while (sair != 1);
}

int codigo_de_unidade_de_medida_valido(int codigo) {
    return codigo == CODIGO_SEGUNDO || codigo == CODIGO_MINUTO || 
           codigo == CODIGO_HORA || codigo == CODIGO_DIA;
}

float conversor_unidade_tempo(int unidade_atual, int unidade_escolhida, float valor_atual) {
    if (unidade_atual == CODIGO_SEGUNDO && unidade_escolhida == CODIGO_MINUTO)
        return converter_segundo_para_minuto(valor_atual);
    if (unidade_atual == CODIGO_SEGUNDO && unidade_escolhida == CODIGO_HORA)
        return converter_segundo_para_hora(valor_atual);
    if (unidade_atual == CODIGO_SEGUNDO && unidade_escolhida == CODIGO_DIA)
        return converter_segundo_para_dia(valor_atual);
    if (unidade_atual == CODIGO_MINUTO && unidade_escolhida == CODIGO_SEGUNDO)
        return converter_minuto_para_segundo(valor_atual);
    if (unidade_atual == CODIGO_MINUTO && unidade_escolhida == CODIGO_HORA)
        return converter_minuto_para_hora(valor_atual);
    if (unidade_atual == CODIGO_MINUTO && unidade_escolhida == CODIGO_DIA)
        return converter_minuto_para_dia(valor_atual);
    if (unidade_atual == CODIGO_HORA && unidade_escolhida == CODIGO_SEGUNDO)
        return converter_hora_para_segundo(valor_atual);
    if (unidade_atual == CODIGO_HORA && unidade_escolhida == CODIGO_MINUTO)
        return converter_hora_para_minuto(valor_atual);
    if (unidade_atual == CODIGO_HORA && unidade_escolhida == CODIGO_DIA)
        return converter_hora_para_dia(valor_atual);
    if (unidade_atual == CODIGO_DIA && unidade_escolhida == CODIGO_SEGUNDO)
        return converter_dia_para_segundo(valor_atual);
    if (unidade_atual == CODIGO_DIA && unidade_escolhida == CODIGO_MINUTO)
        return converter_dia_para_minuto(valor_atual);
    if (unidade_atual == CODIGO_DIA && unidade_escolhida == CODIGO_HORA)
        return converter_dia_para_hora(valor_atual);

    return valor_atual; // Retorna o mesmo valor se as unidades forem iguais
}

// Funções auxiliares de conversão
float converter_segundo_para_minuto(float valor_segundo) { return valor_segundo / MINUTO; }
float converter_segundo_para_hora(float valor_segundo) { return valor_segundo / HORA; }
float converter_segundo_para_dia(float valor_segundo) { return valor_segundo / DIA; }
float converter_minuto_para_segundo(float valor_minuto) { return valor_minuto * MINUTO; }
float converter_minuto_para_hora(float valor_minuto) { return valor_minuto / MINUTO; }
float converter_minuto_para_dia(float valor_minuto) { return valor_minuto / (DIA / MINUTO); }
float converter_hora_para_segundo(float valor_hora) { return valor_hora * HORA; }
float converter_hora_para_minuto(float valor_hora) { return valor_hora * MINUTO; }
float converter_hora_para_dia(float valor_hora) { return valor_hora / 24; }
float converter_dia_para_segundo(float valor_dia) { return valor_dia * DIA; }
float converter_dia_para_minuto(float valor_dia) { return valor_dia * (DIA / MINUTO); }
float converter_dia_para_hora(float valor_dia) { return valor_dia * 24; }
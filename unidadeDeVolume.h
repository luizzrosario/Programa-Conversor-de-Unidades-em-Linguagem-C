#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int validarNumero(const char *str)
{
    char *endptr;
    double valor = strtod(str, &endptr);

    // Se não conseguiu converter ou sobrou algo na string, é inválido
    if (*endptr != '\0' || endptr == str || valor <= 0)
    {
        return 0; // Número inválido
    }
    return 1; // Número válido
}

void converterVolume()
{
    char valor_str[50];
    double valor;
    int unidade_origem, unidade_destino;

    // Entrada do valor como string para tratar ',' como separador decimal
    printf("Digite o valor: ");
    scanf("%s", valor_str);

    // Substituir ',' por '.' na string
    for (int i = 0; i < (int)strlen(valor_str); i++)
    {
        if (valor_str[i] == ',')
        {
            valor_str[i] = '.';
        }
    }

    // Validar se é um número válido
    if (!validarNumero(valor_str))
    {
        printf("Valor inválido! Digite um número positivo.\n");
        return;
    }

    // Converter a string para double
    valor = atof(valor_str);

    // Menu para unidade de origem
    printf("Selecione a unidade de origem:\n");
    printf("1 - Litro (L)\n");
    printf("2 - Metro cúbico (m³)\n");
    printf("3 - Mililitro (mL)\n");
    printf("Opção: ");
    scanf("%d", &unidade_origem);

    if (unidade_origem < 1 || unidade_origem > 3)
    {
        printf("Opção inválida para a unidade de origem!\n");
        return;
    }

    // Menu para unidade de destino
    printf("Selecione a unidade de destino:\n");
    printf("1 - Litro (L)\n");
    printf("2 - Metro cúbico (m³)\n");
    printf("3 - Mililitro (mL)\n");
    printf("Opção: ");
    scanf("%d", &unidade_destino);

    if (unidade_destino < 1 || unidade_destino > 3)
    {
        printf("Opção inválida para a unidade de destino!\n");
        return;
    }

    // Convertendo para litro (L) como base
    if (unidade_origem == 2)
        valor *= 1000; // metro cúbico (m³) para litro
    else if (unidade_origem == 3)
        valor /= 1000; // mililitro (mL) para litro

    // Convertendo de litro (L) para a unidade de destino
    if (unidade_destino == 2)
        valor /= 1000; // litro (L) para metro cúbico (m³)
    else if (unidade_destino == 3)
        valor *= 1000; // litro (L) para mililitro (mL)

    printf("Valor convertido: %.6f\n", valor);

    return;
}

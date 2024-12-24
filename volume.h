#include <stdio.h>

void converterVolume()
{
    double valor;
    char unidade_origem, unidade_destino;

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de origem (l para litro, m para metro cúbico, M para mililitro): ");
    scanf(" %c", &unidade_origem);

    printf("Digite a unidade de destino (l para litro, m para metro cúbico, M para mililitro): ");
    scanf(" %c", &unidade_destino);

    // Convertendo para litro (L) como base
    if (unidade_origem == 'm')
        // metro cúbico (m³) para litro
        valor = valor * 1000;
    else if (unidade_origem == 'l')
        // litro (L) já é a base
        valor = valor;
    else if (unidade_origem == 'M')
        // mililitro (mL) para litro
        valor = valor / 1000;
        
    // Convertendo de litro (L) para a unidade de destino
    if (unidade_destino == 'm')
        // litro (L) para metro cúbico (m³)
        valor /= 1000;
    else if (unidade_destino == 'l')
        // litro (L) para litro (L)
        valor = valor;
    else if (unidade_destino == 'M')
        // litro (L) para mililitro (mL)
        valor *= 1000;
    printf("Valor convertido: %.6f\n", valor);
}

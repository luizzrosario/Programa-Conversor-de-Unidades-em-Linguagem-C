// 1 byte = 8 bits
// 1 kilobyte (KB) = 1024 bytes
// 1 megabyte (MB) = 1024 kilobytes
// 1 gigabyte (GB) = 1024 megabytes
// 1 terabyte (TB) = 1024 gigabytes


#include <stdio.h>

int unidadeArmazenamento() {
    double valor, resultado;
    int unidade_origem, unidade_destino;

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Escolha a unidade de origem:\n");
    printf("1. Bits\n");
    printf("2. Bytes\n");
    printf("3. Kilobytes (KB)\n");
    printf("4. Megabytes (MB)\n");
    printf("5. Gigabytes (GB)\n");
    printf("6. Terabytes (TB)\n");
    scanf("%d", &unidade_origem);

    printf("Escolha a unidade de destino:\n");
    // Mesma lista de opções que a unidade de origem

    // Lógica de conversão:
    switch (unidade_origem) {
        case 1: // Bits
            valor /= 8; // Convertendo para bytes
            break;
        // ... outros casos para bytes, KB, MB, GB, TB
        case 6: // Terabytes
            valor *= 1024 * 1024 * 1024 * 1024; // Convertendo para bits
            break;
        default:
            printf("Unidade de origem inválida.\n");
            return 1;
    }

    switch (unidade_destino) {
        case 1: // Bits
            resultado = valor * 8;
            break;
        // ... outros casos
        default:
            printf("Unidade de destino inválida.\n");
            return 1;
    }

    printf("%.2lf %s = %.2lf %s\n", valor, getUnidade(unidade_origem), resultado, getUnidade(unidade_destino));

    return 0;
}

char* getUnidade(int unidade) {
    switch (unidade) {
        case 1: return "bits";
        case 2: return "bytes";
        // ... outros casos
        default: return "inválida";
    }
}
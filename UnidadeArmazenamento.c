// 1 byte = 8 bits
// 1 kilobyte (KB) = 1024 bytes
// 1 megabyte (MB) = 1024 kilobytes
// 1 gigabyte (GB) = 1024 megabytes
// 1 terabyte (TB) = 1024 gigabytes


#include <stdio.h>
#include <math.h>

char *getUnidade(int unidade);

int main() {
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
    scanf("%d", &unidade_origem);                                                   // Logica de capitacao do valor informado pelo usuario

    printf("Escolha a unidade de destino:\n");

    printf("1. Bits\n");
    printf("2. Bytes\n");
    printf("3. Kilobytes (KB)\n");
    printf("4. Megabytes (MB)\n");
    printf("5. Gigabytes (GB)\n");
    printf("6. Terabytes (TB)\n");
    scanf("%d", &unidade_destino);

    // Logica para a conversao do valor para a unidade de bytes

    switch (unidade_origem) {
        case 1: // Bits
            valor /= 8; 
            break;
        case 2: // Bytes
            valor *= 1;
            break;
        case 3: // Kilobytes
            valor *= 1024; //
            break;
        case 4: // Megabytes
            valor *= 1024 * 1024;
            break;
        case 5: // Gigabytes
            valor *= 1024 * 1024 * 1024; 
            break;
        case 6: // Terabytes
            valor *= 1024 * 1024 * 1024 * 1024;
            break;
        default:
            printf("Unidade de origem inválida.\n");
            return 1;
    }

    // Logica para a conversao do valor da unidade de origem para a unidade de destino

    switch (unidade_destino) {
        case 1: // Bits
            resultado = valor * 8;
            break;
        case 2: // Bytes
            resultado = valor * 1;
            break;
        case 3: // Kilobytes
            resultado = valor / 1024;
            break;
        case 4: // Megabytes
            resultado = valor / (1024 * 1024);
            break;
        case 5: // Gigabytes
            resultado = valor / (1024 * 1024 * 1024);
            break;
        case 6: // Terabytes
            resultado = valor / (1024 * 1024 * 1024 * 1024);
            break;
        default:
            printf("Unidade de destino inválida.\n");
            return 1;
    }

    printf("%.2lf %s = %.2lf %s\n", valor, getUnidade(unidade_origem), resultado, getUnidade(unidade_destino));             // Imprime o resultado da conversao

    return 0;
}

char* getUnidade(int unidade) {
    switch (unidade) {
        case 1: return "bits";
        case 2: return "bytes";
        case 3: return "kilobytes";
        case 4: return "megabytes";                             // Funcao para retornar a unidade de armazenamento
        case 5: return "gigabytes";
        case 6: return "terabytes";
        default: return "inválida";
    }
}
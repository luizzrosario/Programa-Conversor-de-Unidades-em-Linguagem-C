#include <stdio.h>
#include <locale.h>
#include "unidadeDETemperatura.h"
#include "unidadeDEArmazenamento.h"
#include "unidadeDeVolume.h"
#include "unidadeDeMassa.h"
#include "unidadeDeTempo.h"
#include "unidadeDeArea.h"
#include "unidadeDeComprimento.h"

void interface() {
    int escolha;

    while (1) {
        printf("\nSelecione uma categoria para conversão:\n");
        printf("1. Unidades de comprimento\n");
        printf("2. Unidades de massa\n");
        printf("3. Unidades de volume\n");
        printf("4. Unidades de temperatura\n");
        printf("5. Unidades de velocidade\n");
        printf("6. Unidades de potência\n");
        printf("7. Unidades de área\n");
        printf("8. Unidades de tempo\n");
        printf("9. Unidades de dados\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                unidades_de_comprimento();
                break;
            case 2:
                conversorMassa();
                break;
            case 3:
                converterVolume();
                break;
            case 4:
                Conversor_Temperatura();
                break;
            case 5:

                break;
            case 6:

                break;
            case 7:
                Conversor_De_Area();
                break;
            case 8:
                conversorTempo();
                break;
            case 9:
                unidadeArmazenamento();
                break;
            case 10:

                break;
            case 0:
                printf("Saindo do programa...\n");
                return;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }
}

int main() {
    system("chcp 65001");
    interface();
    return 0;
}
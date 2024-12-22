#include <stdio.h>
#include "unidadeTemperatura.h"
#include "unidadeArmazenamento.h"
#include "volume.h"
#include "unidadeDeMassa.h"
// #include "comprimento.h"
// #include "velocidade.h"
// #include "potencia.h"
// #include "area.h"
// #include "tempo.h"
// #include "dados.h"
// #include "testes.h"

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

                break;
            case 8:

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

#include <stdio.h>
// #include "comprimento.h"
// #include "massa.h"
// #include "volume.h"
// #include "temperatura.h"
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
        printf("10. Testes e depuração\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                converterComprimento();
                break;
            case 2:
                converterMassa();
                break;
            case 3:
                converterVolume();
                break;
            case 4:
                converterTemperatura();
                break;
            case 5:
                converterVelocidade();
                break;
            case 6:
                converterPotencia();
                break;
            case 7:
                converterArea();
                break;
            case 8:
                converterTempo();
                break;
            case 9:
                converterDados();
                break;
            case 10:
                executarTestes();
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
    interface();
    return 0;
}

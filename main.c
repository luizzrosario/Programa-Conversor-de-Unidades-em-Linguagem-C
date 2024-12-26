#include <stdio.h>
#include <locale.h> // Biblioteca para configurar a localidade (idioma, formato de números, datas, etc.)
// Incluindo os arquivos de cabeçalho
#include "unidadeDeArea.h"
#include "unidadeDeArmazenamento.h"
#include "unidadeDeComprimento.h"
#include "unidadeDeMassa.h"
#include "unidadeDeTemperatura.h"
#include "unidadeDeTempo.h"
#include "unidadeDeVelocidade.h"
#include "unidadeDeVolume.h"
#include "unidadeDeEnergia.h"

// Função que apresenta a interface de interação com o usuário
void interface() {
    int escolha;

    // Loop principal para exibir o menu até o usuário decidir sair
    while (1) {
        printf("\nSelecione uma categoria para conversão:\n\n");
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
        printf("\nEscolha uma opção: ");
        scanf("%d", &escolha);

        // Verifica a opção escolhida pelo usuário e executa a função correspondente
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
                conversorDeVelocidade();
                break;
            case 6:
                conversorEnergia();
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
            case 0:
                printf("Saindo do programa...\n");
                return;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }
}

int main() {
    system("chcp 65001 > nul"); // Configura o terminal para usar codificação UTF-8 sem exibir mensagem
    interface(); // Inicia a interface do programa
    return 0;
}
#include <stdio.h>
#include <math.h>

// -------------Declaração das variáveis-------------------

void Conversor_de_Area();

//char *Resultado_conversao(int conversao, double sera_convertido);

const double METRO_QUADRADO = 1.0;                // Unidade de medida base
const double CENTIMETRO_QUADRADO = 0.0001;        // 1 cm² para m² = 1 * (10-²)^2= 0.0001 m²
const double KILOMETRO_QUADRADO = 1000000.0;      // 1 km² para  m² = (1*10^3)^2 = 1000000 m²
const double HECTARE = 10000.0;                   // 1 ha para m² = 10000 m²
const double DECAMETRO_QUADRADO = 100.0;          // 1 dam para m² = (1*10)^2 = 100 m² 
const double MILIMETRO_QUADRADO = 0.000001;       // 1 mm² para m² = (1*10^3)^2 = 0.000001 m²
const double POLEGADA_QUADRADA = 0.00064516;      // 1 in^2 para m² = (0,0254)^2 = 0.00064516 m²
const double PES_QUADRADOS = 0.092903;            // 1 ft^2 para m² = (0,3048)^2 = 0.092903 m²
const double JARDA_QUADRADA = 0.836127;           // 1 yd^2 para m² = (0,9144)^2 = 0,836127 m²
const double MILHA_QUADRADA = 2589988.11;         // 1 mi² para m² = (1609,34)^2 = 2.589.988,11 m²
const double ACRES = 4046.86;                     // 1 acre para m² = 4046.86 m²
const double UNIDADE_ASTRONOMICA = 2.238016e22;   // 1 UA² para m² = (1,496e+11)^2 = 2.238016e+22 m²
const double PARSEC_QUADRADO = 9.523396e32;       // 1 Parsec² para m² = (3,086e+16)^2 = 9.523396*10^32 m²
const double ANO_LUZ_QUADRADO = 8.9510521e31;     // 1 AN² para m² = (9,461e+15)^2 = 8,9510521e+31 m²


// --------------------------Protótipo da função-------------------------------
void Conversor_De_Area() {
    char continuar;

do {
    double valor, valorEmMetros = 0.0, valorConvertido = 0.0;
    int unidadeAntes, unidadeConvertida;
    const char* unidadeConvertidaStr = "";                     // adicionando ponteiro para armazenar a unidade de medida a cada valor convertido

    // Exibe as opções de unidades do menu
    printf("\nBem-vindo ao Conversor de Unidades de Área!\n");
        printf("Escolha uma das opções abaixo:\n");
        printf("1. Metro Quadrado (m²)\n");
        printf("2. Centímetro Quadrado (cm²)\n");
        printf("3. Quilômetro Quadrado (km²)\n");
        printf("4. Hectare (ha)\n");
        printf("5. Decâmetro Quadrado (dam²)\n");
        printf("6. Milímetro Quadrado (mm²)\n");
        printf("7. Polegada Quadrada (in²)\n");
        printf("8. Pé Quadrado (ft²)\n");
        printf("9. Jarda Quadrada (yd²)\n");
        printf("10. Milha Quadrada (mi²)\n");
        printf("11. Acre (ac)\n");
        printf("12. Unidade Astronômica (UA²)\n");
        printf("13. Parsec Quadrado\n");
        printf("14. Ano Luz Quadrado\n");
        
    // Entrada do usuário
    printf("\nDigite o valor da área a ser convertida: ");
    scanf("%lf", &valor);

    printf("\nEscolha a unidade de origem (1-14): ");
    scanf("%d", &unidadeAntes);

    printf("Escolha a unidade de destino (1-14): ");
    scanf("%d", &unidadeConvertida);

//----------Fazendo a conversão para metros quadrados------------------

    switch (unidadeAntes) {
        case 1: valorEmMetros = valor * METRO_QUADRADO; break;
        case 2: valorEmMetros = valor * CENTIMETRO_QUADRADO; break;
        case 3: valorEmMetros = valor * KILOMETRO_QUADRADO; break;
        case 4: valorEmMetros = valor * HECTARE; break;
        case 5: valorEmMetros = valor * DECAMETRO_QUADRADO; break;
        case 6: valorEmMetros = valor * MILIMETRO_QUADRADO; break;
        case 7: valorEmMetros = valor * POLEGADA_QUADRADA; break;
        case 8: valorEmMetros = valor * PES_QUADRADOS; break;
        case 9: valorEmMetros = valor * JARDA_QUADRADA; break;
        case 10: valorEmMetros = valor * MILHA_QUADRADA; break;
        case 11: valorEmMetros = valor * ACRES; break;
        case 12: valorEmMetros = valor * UNIDADE_ASTRONOMICA; break; 
        case 13: valorEmMetros = valor * PARSEC_QUADRADO; break;
        case 14: valorEmMetros = valor * ANO_LUZ_QUADRADO; break;
        default:
            printf("Unidade de origem inválida.\n");
            continue; // faz com que o programa pule o resto das instruções do-while
    }


// ----------Fazendo a conversão para a unidade desejada---------------

    switch (unidadeConvertida) {
        case 1: valorConvertido = valorEmMetros / METRO_QUADRADO; unidadeConvertidaStr = "m²"; break;

        case 2: valorConvertido = valorEmMetros / CENTIMETRO_QUADRADO; unidadeConvertidaStr = "cm²"; break;

        case 3: valorConvertido = valorEmMetros / KILOMETRO_QUADRADO; unidadeConvertidaStr = "km²"; break;

        case 4: valorConvertido = valorEmMetros / HECTARE; unidadeConvertidaStr = "ha"; break;

        case 5: valorConvertido = valorEmMetros / DECAMETRO_QUADRADO; unidadeConvertidaStr = "dam"; break;

        case 6: valorConvertido = valorEmMetros / MILIMETRO_QUADRADO; unidadeConvertidaStr = "mm"; break;

        case 7: valorConvertido = valorEmMetros / POLEGADA_QUADRADA; unidadeConvertidaStr = "in²"; break;

        case 8: valorConvertido = valorEmMetros / PES_QUADRADOS; unidadeConvertidaStr = "ft²"; break;

        case 9: valorConvertido = valorEmMetros / JARDA_QUADRADA; unidadeConvertidaStr = "yd²"; break;

        case 10: valorConvertido = valorEmMetros / MILHA_QUADRADA; unidadeConvertidaStr = "mi²"; break;

        case 11: valorConvertido = valorEmMetros / ACRES; unidadeConvertidaStr = "ac"; break;

        case 12: valorConvertido = valorEmMetros / UNIDADE_ASTRONOMICA; unidadeConvertidaStr = "UA²"; break; 

        case 13: valorConvertido = valorEmMetros / PARSEC_QUADRADO; unidadeConvertidaStr = "pc²"; break;
        
        case 14: valorConvertido = valorEmMetros / ANO_LUZ_QUADRADO; unidadeConvertidaStr = "ly²"; break;  

        default:
            printf("Unidade de destino inválida.\n");
            continue; // caso seja colocada um digito inválido imediatamente retorna ao início do loop para que o usuário tente novamente
    }

    //-----------Exibindo o resultado convertido com a unidade----------

    printf("\nO valor convertido é: %.10lf %s\n", valorConvertido, unidadeConvertidaStr);

    // Opção se o usuario deseja fazer outra conversão
    printf("\nDeseja realizar outra conversão? (s/n): ");
    scanf(" %c", &continuar);

} while (continuar == 's' || continuar =='S');

printf("\nPrograma encerrado. O conversor de Unidades de Área está a sua disposição!\n");
}
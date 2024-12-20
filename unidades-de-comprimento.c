#include <stdio.h>

void unidades_de_comprimento();

// função main temporária para testar o código
int main() {
    unidades_de_comprimento();

    return 0;
}

// função principal que ficará no arquivo após finalização 
void unidades_de_comprimento() {
    char linha [256];
    int opcao_usuario;
    printf("\n########## Conversao de unidades de comprimento ##########\n");
    printf("1. Quilometro (km)\n"
           "2. Hectometro (hm)\n"
           "3. Decametro (hm)\n"
           "4. Metro (m)\n"
           "5. Decimetro (dm)\n"
           "6. Centimetro (dm)\n"
           "7. Milimetro (mm)\n"
           "8. Voltar ao menu principal\n");   
    do {
        printf("Digite o numero corresponde da unidade que sera convertida: ");
        if (fgets(linha, sizeof(linha), stdin)) {
            if (1 == sscanf(linha, "%d", &opcao_usuario)) {
                if (opcao_usuario >= 1 && opcao_usuario <= 7) {
                    break;
                } else if (opcao_usuario == 8) {
                    return;
                }
            }
        }
       
        printf("Opcao invalida!\n");

    } while (1);
         

}
#include <stdio.h>

void unidades_de_comprimento();
void validar_entrada(char frase[], int *unidade);

// função main temporária para testar o código
int main() {
    unidades_de_comprimento();

    return 0;
}

// função principal que ficará no arquivo após finalização 
void unidades_de_comprimento() {   
    int unidade_atual, unidade_final;
    printf("\n########## Conversao de unidades de comprimento ##########\n");
    printf("1. Quilometro (km)\n"
           "2. Hectometro (hm)\n"
           "3. Decametro (hm)\n"
           "4. Metro (m)\n"
           "5. Decimetro (dm)\n"
           "6. Centimetro (dm)\n"
           "7. Milimetro (mm)\n"
           "8. Voltar ao menu principal\n");   
   
    validar_entrada("Digite o numero da unidade atual: ", &unidade_atual);
    if (unidade_atual == 8) {
        return;
    }
    
    validar_entrada("Digite o numero da unidade final: ", &unidade_final);    
    if (unidade_final == 8) {
        return;
    }
}

void validar_entrada(char frase[], int *unidade) {
    char linha [256];
    do {
        printf("%s", frase);
        if (fgets(linha, sizeof(linha), stdin)) {
            if (1 == sscanf(linha, "%d", unidade)) {
                if (*unidade >= 1 && *unidade <= 8) {
                    return;
                }                
            }
        }
       
        printf("Opcao invalida!\n");

    } while (1); 
}
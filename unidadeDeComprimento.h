#include <stdio.h>
#include <stdlib.h>

void unidades_de_comprimento();
void validar_entrada(char frase[], int *unidade);
void validar_valor(char frase[], double *valor);
double converter_metros(double valor, int unidade_final);
double converter_centimetros(double valor, int unidade_final);
double converter_milimetros(double valor, int unidade_final);


void unidades_de_comprimento() {   
    int unidade_atual, unidade_final;
    double valor_atual, valor_final;
    printf("\n########## Conversao de unidades de comprimento ##########\n");
    printf("1. Metro (m)\n"
           "2. Centimetro (cm)\n"
           "3. Milimetro (mm)\n"
           "4. Voltar ao menu principal\n");   
   
    validar_entrada("Digite o numero da unidade atual: ", &unidade_atual);
    if (unidade_atual == 4) {
        return;
    }
    
    validar_entrada("Digite o numero da unidade final: ", &unidade_final);    
    if (unidade_final == 4) {
        return;
    }

    validar_valor("Digite o valor para conversao: ", &valor_atual);

    switch (unidade_atual) {
        case 1: valor_final = converter_metros(valor_atual, unidade_final); break; // unidade atual = metros
        case 2: valor_final = converter_centimetros(valor_atual, unidade_final); break; // unidade atual = centimetros
        case 3: valor_final = converter_milimetros(valor_atual, unidade_final); break; // unidade atual = milimetros
        default: ;
    }

    printf("Valor convertido : %.2lf\n", valor_final);
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

void validar_valor(char frase[], double *valor) {
    char linha [256];
    do {
        printf("%s", frase);
        if (fgets(linha, sizeof(linha), stdin)) {
            if (1 == sscanf(linha, "%lf", valor)) {
                if (*valor > 0) {
                    return;
                }                
            }
        }       
        printf("Valor invalido\n");

    } while (1); 
}


double converter_metros(double valor, int unidade_final) {
    double valor_final;

    switch (unidade_final) {
        case 1: valor_final = valor; break; // metros 
        case 2: valor_final = valor * 100; break; // centimetros
        case 3: valor_final = valor * 1000; break; // milimteros
        default: ;
    }

    return valor_final;
}

double converter_centimetros(double valor, int unidade_final) {
    double valor_final;

    switch (unidade_final) {
        case 1: valor_final = valor / 100; break; // metros 
        case 2: valor_final = valor; break; // centimetros
        case 3: valor_final = valor * 10; break; // milimteros
        default: ;
    }

    return valor_final;
}

double converter_milimetros(double valor, int unidade_final) {
    double valor_final;

    switch (unidade_final) {
        case 1: valor_final = valor / 1000; break; // metros 
        case 2: valor_final = valor / 10; break; // centimetros
        case 3: valor_final = valor; break; // milimteros
        default: ;
    }

    return valor_final;
}
#include <stdio.h>
#include <math.h>

#define BIT 1
#define BYTE 8
#define KILOBYTE 1024
#define MEGABYTE 1024*2
#define GIGABYTE 1024*3
#define TERABYTE 1024*4

#define CODIGO_BIT 1
#define CODIGO_BYTE 2
#define CODIGO_KILOBYTE 3
#define CODIGO_MEGABYTE 4
#define CODIGO_GIGABYTE 5
#define CODIGO_TERABYTE 6

// declaração das funções
void conversorArmazenamento();
float conversor_unidade_armazenamento(int unidade_atual, int unidade_escolhida, float valor_atual);
int codigo_de_unidade_de_medida_valido(int codigo);

// declaração das funções de conversão
float converter_bit_para_byte(float valor_bit);
float converter_bit_para_kilobyte(float valor_bit);
float converter_bit_para_megabyte(float valor_bit);
float converter_bit_para_gigabyte(float valor_bit);
float converter_bit_para_terabyte(float valor_bit);
float converter_byte_para_bit(float valor_byte);
float converter_byte_para_kilobyte(float valor_byte);
float converter_byte_para_megabyte(float valor_byte);
float converter_byte_para_gigabyte(float valor_byte);
float converter_byte_para_terabyte(float valor_byte);
// Continue com as funções para todas as combinações...

void conversorArmazenamento() {
    int unidade_atual, unidade_escolhida, sair;
    float valor_atual, valor_convertido;

    do {
        printf("Digite o valor a ser convertido: ");
    }
}

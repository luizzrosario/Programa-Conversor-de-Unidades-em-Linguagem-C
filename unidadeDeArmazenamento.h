#include <stdio.h>
#include <math.h>

#define BIT 1
#define BYTE 8
#define KILOBYTE 1024
#define MEGABYTE (1024 * KILOBYTE)
#define GIGABYTE (1024 * MEGABYTE)
#define TERABYTE (1024 * GIGABYTE)

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
float converter_kilobyte_para_bit(float valor_kilobyte);
float converter_kilobyte_para_byte(float valor_kilobyte);
float converter_kilobyte_para_megabyte(float valor_kilobyte);
float converter_kilobyte_para_gigabyte(float valor_kilobyte);
float converter_kilobyte_para_terabyte(float valor_kilobyte);
float converter_megabyte_para_bit(float valor_megabyte);
float converter_megabyte_para_byte(float valor_megabyte);
float converter_megabyte_para_kilobyte(float valor_megabyte);
float converter_megabyte_para_gigabyte(float valor_megabyte);
float converter_megabyte_para_terabyte(float valor_megabyte);
float converter_gigabyte_para_bite(float valor_gigabyte);
float converter_gigabyte_para_byte(float valor_gigabyte);
float converter_gigabyte_para_kilobyte(float valor_gigabyte);
float converter_gigabyte_para_megabyte(float valor_gigabyte);
float converter_gigabyte_para_terabyte(float valor_gigabyte);
float converter_terabyte_para_bit(float valor_terabyte);
float converter_terabyte_para_byte(float valor_terabyte);
float converter_terabyte_para_kilobyte(float valor_terabyte);
float converter_terabyte_para_gigabyte(float valor_terabyte);
float converter_terabyte_para_megabyte(float valor_terabyte);



void conversorArmazenamento() {
    int unidade_atual, unidade_escolhida, sair;
    float valor_atual, valor_convertido;

    do {
        printf("Digite o valor a ser convertido: ");
    } while (sair != 1);
}

return 0;

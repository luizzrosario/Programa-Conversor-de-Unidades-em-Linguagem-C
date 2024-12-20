#include <stdio.h>

#define GRAMA 1
#define QUILOGRAMA 1000
#define TONELADA 1000000

#define CODIGO_GRAMA 1
#define CODIGO_QUILOGRAMA 2
#define CODIGO_TONELADA 3

// declaração das funções
void conversorMassa();
float conversor_unidade_massa(int unidade_atual, int unidade_escolhida,
                              float valor_atual);
int codigo_de_unidade_de_medida_valido(int codigo);

// declaração das funções de conversão
float converter_grama_para_quilograma(float valor_grama);
float converter_grama_para_tonelada(float valor_grama);
float converter_quilograma_para_grama(float valor_quilograma);
float converter_quilograma_para_tonelada(float valor_quilograma);
float converter_tonelada_para_grama(float valor_tonelada);
float converter_tonelada_para_quilograma(float valor_quilograma);

void conversorMassa() {

  // declaração das variaveis
  int unidade_atual, unidade_escolhida, sair;
  float valor_atual, valor_convertido;

  do {

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor_atual);

    printf("Em qual unidade de massa esse valor está?\n[1] Grama\n[2] "
           "Quilograma\n[3] Tonelada\nEscolha: ");
    scanf("%d", &unidade_atual);

    if (!(codigo_de_unidade_de_medida_valido(
            unidade_atual))) { // caso o usuário não selecione nenhuma unidade
                               // valida o loop repete
      printf("Valor inválido, reiniciando.\n");

      continue;
    }

    printf("Em qual unidade de massa você quer converter?\n[1] Grama\n[2] "
           "Quilograma\n[3] Tonelada\nEscolha: ");
    scanf("%d", &unidade_escolhida);

    if (!(codigo_de_unidade_de_medida_valido(
            unidade_escolhida))) { // verificando novamente
      printf("Valor inválido, reiniciando.\n");
      continue;
    }

    // obtendo o valor convertido
    valor_convertido =
        conversor_unidade_massa(unidade_atual, unidade_escolhida, valor_atual);

    printf("O valor convertido é: %.2f\n", valor_convertido);

    printf("Digite 1 caso deseje sair: ");
    scanf("%d", &sair);

  } while (sair != 1);
}

// função para verificar se o usuário digitou um código valido
int codigo_de_unidade_de_medida_valido(int codigo) {

  switch (codigo) {

  case CODIGO_GRAMA:
    return 1;
  case CODIGO_QUILOGRAMA:
    return 1;
  case CODIGO_TONELADA:
    return 1;
  default:
    return 0;
  }
}

// função principal para chamar as auxiliares de conversão
float conversor_unidade_massa(int unidade_atual, int unidade_escolhida,
                              float valor_atual) {

  float valor_convertido;

  if (unidade_atual == CODIGO_GRAMA && unidade_escolhida == CODIGO_QUILOGRAMA) {
    valor_convertido = converter_grama_para_quilograma(valor_atual);
  } else if (unidade_atual == CODIGO_GRAMA &&
             unidade_escolhida == CODIGO_TONELADA) {
    valor_convertido = converter_grama_para_tonelada(valor_atual);
  } else if (unidade_atual == CODIGO_QUILOGRAMA &&
             unidade_escolhida == CODIGO_GRAMA) {
    valor_convertido = converter_quilograma_para_grama(valor_atual);
  } else if (unidade_atual == CODIGO_QUILOGRAMA &&
             unidade_escolhida == CODIGO_TONELADA) {
    valor_convertido = converter_quilograma_para_tonelada(valor_atual);
  } else if (unidade_atual == CODIGO_TONELADA &&
             unidade_escolhida == CODIGO_GRAMA) {
    valor_convertido = converter_tonelada_para_grama(valor_atual);
  } else if (unidade_atual == CODIGO_TONELADA &&
             unidade_escolhida == CODIGO_QUILOGRAMA) {
    valor_convertido = converter_tonelada_para_quilograma(valor_atual);
  } else {
    valor_convertido = valor_atual;
  }

  return valor_convertido;
}

// funções auxiliares de conversões

float converter_grama_para_quilograma(float valor_grama) {
  return valor_grama / QUILOGRAMA;
}

float converter_grama_para_tonelada(float valor_grama) {
  return valor_grama / TONELADA;
}

float converter_quilograma_para_grama(float valor_quilograma) {
  return valor_quilograma * QUILOGRAMA;
}

float converter_quilograma_para_tonelada(float valor_quilograma) {
  float valor_em_grama = valor_quilograma * QUILOGRAMA;
  return valor_em_grama / TONELADA;
}

float converter_tonelada_para_grama(float valor_tonelada) {
  return valor_tonelada * TONELADA;
}

float converter_tonelada_para_quilograma(float valor_tonelada) {
  return valor_tonelada * QUILOGRAMA;
}

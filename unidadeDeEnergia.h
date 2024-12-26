#define WATTS 1
#define KILOWATTS 1000
#define CAVALOS_VAPOR 735.5

#define CODIGO_WATTS 1
#define CODIGO_KILOWATTS 2
#define CODIGO_CAVALOS_VAPOR 3

void conversorEnergia();
float conversor_unidade_energia(int unidade_atual, int unidade_escolhida, float valor_atual);
int codigo_de_unidade_energia_valido(int codigo);

float converter_watts_para_kilowatts(float valor_watts);
float converter_watts_para_cavalos_vapor(float valor_watts);
float converter_kilowatts_para_watts(float valor_kilowatts);
float converter_kilowatts_para_cavalos_vapor(float valor_kilowatts);
float converter_cavalos_vapor_para_watts(float valor_cavalos);
float converter_cavalos_vapor_para_kilowatts(float valor_cavalos);


void conversorEnergia() {
    int unidade_atual, unidade_escolhida, sair;
    float valor_atual, valor_convertido;

    do {
        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor_atual);

        printf("Em qual unidade de energia esse valor está?\n[1] Watts\n[2] Kilowatts\n[3] Cavalos-vapor\nEscolha: ");
        scanf("%d", &unidade_atual);

        if (!codigo_de_unidade_energia_valido(unidade_atual)) {
            printf("Valor inválido, reiniciando.\n");
            continue;
        }

        printf("Para qual unidade de energia deseja converter?\n[1] Watts\n[2] Kilowatts\n[3] Cavalos-vapor\nEscolha: ");
        scanf("%d", &unidade_escolhida);

        if (!codigo_de_unidade_energia_valido(unidade_escolhida)) {
            printf("Valor inválido, reiniciando.\n");
            continue;
        }

        valor_convertido = conversor_unidade_energia(unidade_atual, unidade_escolhida, valor_atual);
        printf("O valor convertido é: %.2f\n", valor_convertido);

        printf("Digite 1 para sair ou qualquer outro número para continuar: ");
        scanf("%d", &sair);
    } while (sair != 1);
}

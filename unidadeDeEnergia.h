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
}

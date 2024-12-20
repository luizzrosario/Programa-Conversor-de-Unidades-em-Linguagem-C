/*
    ºC -> ºF => F = (C * 1.8)+32 👍
    ºF -> ºC => C = (F - 32)/1.8 👍
    ºC -> K  => K = C + 273.15 👍
    K  -> ºC => C = K - 273.15 👍
    ºF -> K  => K = ((F - 32)/1.8)+273.15 👍
    K  -> ºF => F = ((K - 273.15)*1.8)+32 👍
*/
// Unidade de temperatura, Jacson Santos(responsável pela cliação do código).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int Conversor_Temperatura();
char* Resultado_conversao(int conversao, double a_converter);
double Celsius_para_Fahrenheit(double c);
double Fahrenheit_para_Celsius(double f);
double Celsius_para_Kelvin(double c);
double Kelvin_para_Celsius(double k);
double Fahrenheit_para_Kelvin(double f);
double Kelvin_para_Fahrenheit(double k);

char *conversoes[] = {"Celsius para Fahrenheit", "Fahrenheit para Celsius", "Celsius para Kelvin", "Kelvin para Celsius", "Fahrenheit para Kelvin", "Kelvin para Fahrenheit", "Celsius para Fahrenheit e Kelvin", "Fahrenheit para Celsius e Kelvin","Kelvin para Celsius e  Fahrenheit"};

int main(){
    system("chcp 65001");
    while (1){
        Conversor_Temperatura();
    }
    return 0;
}

int Conversor_Temperatura(){
    int conversao = 0;
    double valor_converter = 0;

    printf("Escolha a conversão desejada.");
    for (size_t i = 0; i < sizeof(conversoes) / sizeof(conversoes[0]); i++) {
        printf("\n\t %d => %s",(i+1),conversoes[i]);
    }
    printf("\nDigite o número correspondente: ");
    scanf("%d",&conversao);
    
    printf("Digite valor do grau a converter: ");
    scanf("%lf",&valor_converter);
    char *resultado = Resultado_conversao(conversao,valor_converter);
    printf("%lf",&resultado);
    if (resultado == NULL || strlen(resultado) == 0 || resultado == ""){
        printf("Houve um erro!\n");
    }
    printf("\n%s\n",resultado);
}

char* Resultado_conversao(int conversao, double a_converter) {
    // Aloca memória para a string
    char* texto_saida = malloc(200);
    if (!texto_saida) {
        perror("Erro ao alocar memória");
        return NULL;  // Retorna NULL em caso de erro
    }
    // Monta a mensagem inicial
    snprintf(texto_saida, 200, "A conversao de '%s' é igual a: ", conversoes[conversao - 1]);
    // Calcula o espaço restante
    char* pos_atual = texto_saida + strlen(texto_saida);
    int restante = 200 - strlen(texto_saida);

    // Adiciona a conversão específica
    switch (conversao) {
        case 1:
            snprintf(pos_atual, restante, "%.2f ºF", Celsius_para_Fahrenheit(a_converter));
            break;
        case 2:
            snprintf(pos_atual, restante, "%.2f ºC", Fahrenheit_para_Celsius(a_converter));
            break;
        case 3:
            snprintf(pos_atual, restante, "%.2f K", Celsius_para_Kelvin(a_converter));
            break;
        case 4:
            snprintf(pos_atual, restante, "%.2f ºC", Kelvin_para_Celsius(a_converter));
            break;
        case 5:
            snprintf(pos_atual, restante, "%.2f K", Fahrenheit_para_Kelvin(a_converter));
            break;
        case 6:
            snprintf(pos_atual, restante, "%.2f ºF", Kelvin_para_Fahrenheit(a_converter));
            break;
        case 7:
            snprintf(pos_atual, restante, "%.2f ºF e %.2f K", Celsius_para_Fahrenheit(a_converter), Celsius_para_Kelvin(a_converter));
            break;
        case 8:
            snprintf(pos_atual, restante, "%.2f ºC e %.2f K", Fahrenheit_para_Celsius(a_converter), Fahrenheit_para_Kelvin(a_converter));
            break;
        case 9:
            snprintf(pos_atual, restante, "%.2f ºC e %.2f ºF", Kelvin_para_Celsius(a_converter), Kelvin_para_Fahrenheit(a_converter));
            break;
        default:
            snprintf(texto_saida, 2, "");
            return NULL;
    }
    // Retorna o ponteiro para a string
    return texto_saida;
}

double Celsius_para_Fahrenheit(double c){
    double f = (c * 1.8)+32;
    return f;
}
double Fahrenheit_para_Celsius(double f){
    double c = (f - 32)/1.8;
    return c; 
}
double Celsius_para_Kelvin(double c){
    double k = c + 273.15;
    return k;
}
double Kelvin_para_Celsius(double k){
    double c = k - 273.15;
    return c;
}
double Fahrenheit_para_Kelvin(double f){
    double k = ((f - 32)/1.8)+273.15;
    return k;
}
double Kelvin_para_Fahrenheit(double k){
    double f = ((k - 273.15)*1.8)+32;
    return f;
}
/*
    ºC -> ºF => F = (C * 1.8)+32 👍
    ºF -> ºC => C = (F - 32)/1.8 👍
    ºC -> K  => K = C + 273.15 👍
    K  -> ºC => C = K - 273.15 👍
    ºF -> K  => K = ((F - 32)/1.8)+273.15 👍
    K  -> ºF => F = ((K - 273.15)*1.8)+32 👍
*/
// Unidade de temperatura, Jacson Santos(responsável pela cliação desse código).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Conversor_Temperatura();
char *Resultado_conversao(int conversao, double a_converter);
double Celsius_para_Fahrenheit(double c);
double Fahrenheit_para_Celsius(double f);
double Celsius_para_Kelvin(double c);
double Kelvin_para_Celsius(double k);
double Fahrenheit_para_Kelvin(double f);
double Kelvin_para_Fahrenheit(double k);

char *conversoes[] = {"Celsius para Fahrenheit", "Fahrenheit para Celsius", "Celsius para Kelvin", "Kelvin para Celsius", "Fahrenheit para Kelvin", "Kelvin para Fahrenheit", "Celsius para Fahrenheit e Kelvin", "Fahrenheit para Celsius e Kelvin", "Kelvin para Celsius e  Fahrenheit"};

// Função principal do conversor, basta chama-la na função main (Não esqueça de adicionar 'system("chcp 65001");')
void Conversor_Temperatura()
{
    do
    {
        int conversao;
        double a_converter;

        printf("\nEscolha a conversão desejada.");
        // for responsável por exibir as opções para o úsuário
        for (size_t i = 0; i < sizeof(conversoes) / sizeof(conversoes[0]); i++)
        {
            printf("\n\t %d => %s", (i + 1), conversoes[i]);
        }
        printf("\n\t 0 => PARA SAIR");

        printf("\nDigite o número correspondente: ");
        scanf("%d", &conversao);
        if (conversao == 0)
            break;
        printf("Digite o valor do grau a converter: ");
        scanf("%lf", &a_converter);

        char *resultado = Resultado_conversao(conversao, a_converter);
        printf("\n%s\n", resultado);
    } while (1);
    printf("\nVocê saiu do Conversor de Temperatura!");
}

// função responsável por genciar a escolha do usúário e tratamento de erros. retorna a mensagem com o resultado.
char *Resultado_conversao(int conversao, double a_converter)
{
    // Aloca memória para a string
    char *texto_saida = malloc(210);
    if (!texto_saida)
    {
        texto_saida = "Erro ao alocar memória, tente novamente";
        return texto_saida;
    }
    // Verifica se a opção é inválida
    if (conversao < 1 || conversao > (int)(sizeof(conversoes) / sizeof(conversoes[0])))
    {
        texto_saida = "Opção inválida, tente novamente.";
        return texto_saida;
    }

    // Inicia a mensagem de retorno
    snprintf(texto_saida, 210, "A conversao de '%s' é igual a: ", conversoes[conversao - 1]);
    char *pos_atual = texto_saida + strlen(texto_saida); // Aponta para a posição final dos caracteres já adicionados à string;
    int restante = 210 - strlen(texto_saida);            // verifica os espaços restande (que podem ser adicionado mais caracteres);

    // Realiza a conversão específica
    switch (conversao)
    {
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
    }
    // Retorna o ponteiro contendo a mensagem com resultado da conversão.
    return texto_saida;
}

/*Abaixo estão as funções responsáveis por realizar os calculos de cada formula correpondente*/
double Celsius_para_Fahrenheit(double c)
{
    double f = (c * 1.8) + 32;
    return f;
}
double Fahrenheit_para_Celsius(double f)
{
    double c = (f - 32) / 1.8;
    return c;
}
double Celsius_para_Kelvin(double c)
{
    double k = c + 273.15;
    return k;
}
double Kelvin_para_Celsius(double k)
{
    double c = k - 273.15;
    return c;
}
double Fahrenheit_para_Kelvin(double f)
{
    double k = ((f - 32) / 1.8) + 273.15;
    return k;
}
double Kelvin_para_Fahrenheit(double k)
{
    double f = ((k - 273.15) * 1.8) + 32;
    return f;
}
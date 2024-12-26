
#include <stdio.h>

// Função para exibir o menu
void menu()
{
    printf("\nConversor de Velocidade\n");
    printf("1. Km/h para m/s\n");
    printf("2. m/s para Km/h\n");
    printf("3. Km/h para mph\n");
    printf("4. mph para Km/h\n");
    printf("5. Sair\n");
    printf("Escolha uma opcao: ");
}

// Função principal do conversor
void conversorDeVelocidade()
{
    int opcao;
    double velocidade, resultado;

    do
    {
        menu();
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite a velocidade em Km/h: ");
            scanf("%lf", &velocidade);
            resultado = velocidade / 3.6;
            printf("Velocidade em m/s: %.2lf\n", resultado);
            break;
        case 2:
            printf("Digite a velocidade em m/s: ");
            scanf("%lf", &velocidade);
            resultado = velocidade * 3.6;
            printf("Velocidade em Km/h: %.2lf\n", resultado);
            break;
        case 3:
            printf("Digite a velocidade em Km/h: ");
            scanf("%lf", &velocidade);
            resultado = velocidade / 1.609;
            printf("Velocidade em mph: %.2lf\n", resultado);
            break;
        case 4:
            printf("Digite a velocidade em mph: ");
            scanf("%lf", &velocidade);
            resultado = velocidade * 1.609;
            printf("Velocidade em Km/h: %.2lf\n", resultado);
            break;
        case 5:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 5);

    return; // Função void, portanto não retorna nada
}

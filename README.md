# Repositório do Grupo 6 - Subgrupo 2

---

## Objetivo

O objetivo deste programa é ser um **conversor geral de unidades**.

---

## Funcionalidades

O programa contém as seguintes opções:

1. **Unidades de comprimento**
2. **Unidades de massa**
3. **Unidades de volume**
4. **Unidades de temperatura**
5. **Unidades de velocidade**
6. **Unidades de potência**
7. **Unidades de área**
8. **Unidades de tempo**
9. **Unidades de dados**
10. **Sair**

---

## Estrutura do Programa

O programa gira em torno de uma interface no terminal que utiliza um sistema de `switch-case` para direcionar o fluxo às funções específicas que realizam as conversões desejadas.

---

## Compilação do Código

Para compilar o código do projeto, siga os passos abaixo:

1. Certifique-se de que todos os arquivos `.c` e `.h` do projeto estejam no mesmo diretório.
2. Abra o terminal ou prompt de comando e navegue até o diretório onde os arquivos do projeto estão localizados.
3. Use o seguinte comando para compilar o programa utilizando o GCC:

   `gcc -o conversor main.c`

4. Para executar o programa compilado, utilize o comando:

   `./conversor`

Certifique-se de ter o GCC instalado no sistema para que a compilação funcione corretamente.

---

## Relatório

### Desenvolvimento do Projeto

O desenvolvimento do projeto foi marcado por reuniões colaborativas que impulsionaram o progresso do trabalho e definiram estratégias de organização.

#### Primeiro Encontro (18 de dezembro de 2024)

No primeiro encontro, foram discutidas ideias iniciais e organizada a estrutura de trabalho. Luiz Rosário foi escolhido como líder semanal e ficou responsável por criar o repositório do projeto no GitHub. Entre as estratégias definidas, destacam-se:

- Uso de branches individuais para cada integrante.
- Implementação de funções específicas por cada membro do grupo.
- Realização de commits para documentar as contribuições de forma clara.

#### Segundo Encontro (20 de dezembro de 2024)

No segundo encontro, o grupo avaliou o progresso do trabalho e constatou que boa parte das funcionalidades já estava quase concluída, exceto as conversões relacionadas às unidades de velocidade e potência, que ainda estavam pendentes.

Além disso, problemas técnicos, como conflitos de código, foram resolvidos de maneira colaborativa, o que contribuiu para a padronização e integração entre os módulos. Outras decisões técnicas incluíram:

- Conversão de funções para o tipo `void` quando aplicável.
- Remoção de retornos desnecessários.
- Ajustes na interface do programa.

#### Padronização e Organização

A padronização foi um ponto de destaque no projeto. O grupo adotou:

- **Convenção CamelCase** para nomeação dos arquivos de cabeçalho (.h), como:
  - `unidadeDeArea.h`
  - `unidadeDeArmazenamento.h`
- Organização modular do código, separando funções específicas em arquivos dedicados, o que facilita a colaboração e a manutenção futura do programa.

Com essas práticas, o projeto foi conduzido de forma organizada e alinhada às melhores práticas de desenvolvimento colaborativo.

---

# Sobre cada conversor

## Unidade de Área

### Introdução

O conversor de área permite transformar valores entre 14 diferentes unidades de medida. Ele utiliza o metro quadrado (m²) como unidade base, realizando a conversão em duas etapas para garantir a precisão.

### Funcionamento Técnico

1. Multiplica-se o valor da área de origem pelo fator de conversão correspondente, normalizando para metros quadrados.

   - **Cálculo**:  
     valorEmMetros = valorOrigem \* fatorOrigem

2. Divide-se o valor em metros quadrados pelo fator da unidade de destino, obtendo o resultado na unidade desejada.
   - **Cálculo**:  
     valorConvertido = valorEmMetros / fatorDestino

### Execução do Programa

1. O usuário insere o valor a ser convertido.
2. Escolhe a unidade de origem dentre 14 opções.
3. Seleciona a unidade de destino.
4. O programa exibe o valor convertido e oferece a opção de realizar outra conversão.

### Exemplo de Execução

```plaintext
Bem-vindo ao Conversor de Unidades de Área!
Escolha uma das opções abaixo:
1. Metro Quadrado (m²)
2. Centímetro Quadrado (cm²)
...

Digite o valor da área a ser convertida: 10
Escolha a unidade de origem (1-14): 4
Escolha a unidade de destino (1-14): 1

O valor convertido é: 100000.0000000000 m²

Deseja realizar outra conversão? (s/n): n
Programa encerrado. Obrigado por utilizar o conversor de unidades de área!
```

---

## Unidade de Temperatura

### Introdução

Este conversor permite transformar valores entre Celsius, Fahrenheit e Kelvin utilizando fórmulas matemáticas precisas.

### Funcionamento Técnico

1. O programa apresenta um menu de opções de conversão.
2. O usuário escolhe o tipo de conversão desejado e insere o valor da temperatura.
3. O programa aplica a fórmula correspondente para calcular o resultado:
   - Celsius para Fahrenheit: F = (C \* 1.8) + 32
   - Fahrenheit para Kelvin: K = (F - 32) / 1.8 + 273.15
   - (Outras fórmulas semelhantes para cada conversão).

### Execução do Programa

1. O usuário escolhe a conversão desejada no menu.
2. Insere o valor da temperatura.
3. O programa exibe o resultado e retorna ao menu principal.

### Exemplo de Execução

```plaintext
Escolha a conversão desejada:
1. Celsius para Fahrenheit
2. Fahrenheit para Celsius
...

Digite o número correspondente: 3
Digite o valor do grau a converter: 25

A conversão de 'Celsius para Kelvin' é igual a: 298.15 K
```

---

## Unidade de Volume

### Introdução

O conversor de volume realiza transformações entre diferentes unidades de medida usando o litro (L) como referência base.

### Funcionamento Técnico

1. O valor de origem é convertido para litros usando um fator de conversão.

   - **Cálculo**:  
     valorEmLitros = valorOrigem \* fatorOrigem

2. O valor em litros é convertido para a unidade de destino.
   - **Cálculo**:  
     valorConvertido = valorEmLitros / fatorDestino

### Execução do Programa

1. O usuário insere o valor que deseja converter.
2. Escolhe a unidade de origem entre as opções.
3. Escolhe a unidade de destino entre as opções.
4. O programa exibe o valor convertido.

### Exemplo de Execução

```plaintext
Digite o valor: 1250
Selecione a unidade de origem:
1 - Litro (L)
2 - Metro cúbico (m³)
...

Selecione a unidade de destino:
1 - Litro (L)
2 - Metro cúbico (m³)
...

Valor convertido: 1.250000
```

---
## Unidade De Potência


Este módulo é responsável por realizar conversões entre diferentes unidades de potência, como Watts, Kilowatts e Cavalos-vapor. Ele inclui funções bem definidas para garantir uma interação eficiente e intuitiva com o usuário.

---

#### Definições
- **Watts (W):** Unidade básica de potência no sistema internacional (SI).
- **Kilowatts (kW):** Unidade equivalente a 1000 Watts.
- **Cavalos-vapor (CV):** Unidade de potência equivalente a aproximadamente 735,5 Watts.

---

#### Códigos de Unidade
- `CODIGO_WATTS (1)`: Representa Watts.
- `CODIGO_KILOWATTS (2)`: Representa Kilowatts.
- `CODIGO_CAVALOS_VAPOR (3)`: Representa Cavalos-vapor.

---

#### Estrutura do Código
- **Macros e Definições**
  - Definição de constantes para simplificar conversões, como `WATTS`, `KILOWATTS` e `CAVALOS_VAPOR`.
  - Definição de códigos de unidade (`CODIGO_WATTS`, `CODIGO_KILOWATTS`, `CODIGO_CAVALOS_VAPOR`).

- **Função principal**
  - `UnidadeDePotencia()`: Gerencia a interação com o usuário para entrada de dados, validação e apresentação do resultado da conversão.

- **Validação**
  - `codigo_de_unidade_potencia_valido(int codigo)`: Valida se o código da unidade é válido (Watts, Kilowatts ou Cavalos-vapor).

- **Conversões Diretas**
  - `conversor_unidade_potencia(int unidade_atual, int unidade_escolhida, float valor_atual)`: Realiza a conversão entre duas unidades de potência com base no valor informado.

- **Funções Auxiliares**
  - `converter_watts_para_kilowatts(float valor_watts)`: Converte de Watts para Kilowatts.
  - `converter_watts_para_cavalos_vapor(float valor_watts)`: Converte de Watts para Cavalos-vapor.
  - `converter_kilowatts_para_watts(float valor_kilowatts)`: Converte de Kilowatts para Watts.
  - `converter_kilowatts_para_cavalos_vapor(float valor_kilowatts)`: Converte de Kilowatts para Cavalos-vapor.
  - `converter_cavalos_vapor_para_watts(float valor_cavalos)`: Converte de Cavalos-vapor para Watts.
  - `converter_cavalos_vapor_para_kilowatts(float valor_cavalos)`: Converte de Cavalos-vapor para Kilowatts.

---

#### Exemplo de Uso
A função principal, `UnidadeDePotencia()`, guia o usuário por meio de uma série de etapas para realizar a conversão desejada. 

**Fluxo de execução:**
1. O usuário insere o valor da potência.
2. Escolhe a unidade atual do valor inserido:
   - [1] Watts
   - [2] Kilowatts
   - [3] Cavalos-vapor
3. Escolhe a unidade para a qual deseja converter:
   - [1] Watts
   - [2] Kilowatts
   - [3] Cavalos-vapor
4. O programa exibe o resultado da conversão.

**Exemplo de execução:**
```c
Digite o valor da potência a ser convertido: 1500
Em qual unidade de potência esse valor está?
[1] Watts
[2] Kilowatts
[3] Cavalos-vapor
Escolha: 1
Para qual unidade de potência deseja converter?
[1] Watts
[2] Kilowatts
[3] Cavalos-vapor
Escolha: 2
O valor convertido é: 1.50
```

---

## Unidade de Massa

### Introdução

Este módulo é responsável pela conversão das unidades de massa: grama, quilograma e tonelada. Ele utiliza a grama como referência para fazer as conversões.

### Funcionamento Técnico 
1. **Entrada do Valor**: O usuário insere o valor de massa a ser convertido (`valor_atual`).  

2. **Seleção de Unidades**:  
   - Escolhe a unidade atual ([1] Grama, [2] Quilograma, [3] Tonelada).  
   - Escolhe a unidade de destino com o mesmo menu.  

3. **Validação**: As entradas são verificadas com a função `codigo_de_unidade_de_medida_valido`. Entradas inválidas exibem erro e reiniciam o processo.

4. **Cálculo da Conversão**:  
   - Realiza a conversão usando as relações:  
     - 1 Tonelada = 1000 Quilogramas = 1.000.000 Gramas  
     - 1 Quilograma = 1000 Gramas  

5. **Resultado**: Exibe o valor convertido na unidade desejada.

6. **Repetição ou Saída**: O usuário decide se realiza outra conversão ou encerra o programa.

### Exemplo de execução:
```
Digite o valor a ser convertido: 5000
Em qual unidade de massa esse valor está?
[1] Grama
[2] Quilograma
[3] Tonelada
Escolha: 1
Em qual unidade de massa você quer converter?
[1] Grama
[2] Quilograma
[3] Tonelada
Escolha: 2
Resultado: 5000 Gramas equivalem a 5 Quilogramas.
Deseja realizar outra conversão?
[1] Sim
[2] Não
Escolha: 2
```

## Unidade de Comprimento

### Introdução

Este módulo é responsável pela conversão das seguintes unidades de comprimento: metros, centímetros e milímetros.

### Funcionamento Técnico

1. **Entrada da Unidade Atual**: 
  - O usuário insere o código da unidade de comprimento atual.
  - O código é validado. 
    - Código inválido: uma mensagem de erro é mostrada ao usuário e um novo prompt para a entrada do código é gerado. 

2. **Entrada da Unidade Final**: 
  - O usuário insere o código da unidade de comprimento final.
  - O código é validado. 
    - Código inválido: uma mensagem de erro é mostrada ao usuário e um novo prompt para a entrada do código é gerado. 

3. **Entrada da Valor**:  
  - O usuário insere o valor que será convertido. 
  - O valor é validado.
    - Código inválido: uma mensagem de erro é mostrada ao usuário e um novo prompt para a entrada do valor é gerado. 

4. **Saída do Valor**: O valor convertido é impresso na tela. 

### Exemplo de execução:
```
[1] Metro (m)
[2] Centimetro (cm)
[3] Milimetro (mm)
[4] Voltar ao menu principal
Digite o numero da unidade atual: 1
Digite o numero da unidade final: 3
Digite o valor para conversao: 1
Valor convertido : 1000.00
```

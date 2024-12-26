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
5. **Unidades de velocidade (no aguardo)**
6. **Unidades de potência (no aguardo)**
7. **Unidades de área**
8. **Unidades de tempo**
9. **Unidades de dados**
0. **Sair**

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


### Unidade de area

O programa é feito utilizado o metro quadrado como base para conversão. Ela é feita em dois passos:

1 - Multiplicamos o valor da área escolhida pelo usuário, pelo fator de conversão correspondente à unidade de origem (exemplo: 1 km² = 1.000.000 m²). Isso normaliza o valor para a unidade base, que é o metro quadrado.

Valor em metros = valor * fator Origem

O fator origem é o equivalente em metros quadrados de cada unidade do programa.

2 - Para a unidade de destino: Dividimos o valor em metros quadrados pelo fator de conversão correspondente à unidade de destino (exemplo: 1 hectare = 10.000 m²).

Valor Convertido = valor em metros / fator Destino

Isso permite fazer a conversão diretamente com qualquer valor, utilizando o metro quadrado como base.

--------Execução do conversão de unidades de Área--------------

1- O usuário escolhe o valor que deseja que seja convertido.
2 - Escolhe entre as 14 opções de unidade de medida do valor escolhido.
3 - Escolhe entre as 14 opções da unidade de medida da conversão.

Exemplo:
```plaintext
Bem-vindo ao Conversor de Unidades de Área!
Escolha uma das opções abaixo:
1. Metro Quadrado (m²)
2. Centímetro Quadrado (cm²)
3. Quilômetro Quadrado (km²)
4. Hectare (ha)
5. Decâmetro Quadrado (dam²)
6. Milímetro Quadrado (mm²)
7. Polegada Quadrada (in²)
8. Pé Quadrado (ft²)
9. Jarda Quadrada (yd²)
10. Milha Quadrada (mi²)
11. Acre (ac)
12. Unidade Astronômica (UA²)
13. Parsec Quadrado (pc²)
14. Ano Luz Quadrado (ly²)

Digite o valor da área a ser convertida: 10 
Escolha a unidade de origem (1-14): 4
Escolha a unidade de destino (1-14): 1

O valor convertido é: 100000.0000000000 m²

Deseja realizar outra conversão? (s/n): n
Programa encerrado. Obrigado por utilizar o conversor de unidades de área!
```

### Unidade de Temparatura

Este programa realiza conversões entre diferentes escalas de temperatura (Celsius, Fahrenheit e Kelvin). Ele utiliza fórmulas matemáticas precisas para transformar os valores fornecidos pelo usuário e apresenta os resultados de forma clara e direta.  

---
#### Como o programa funciona  

1. O programa apresenta um menu com diversas opções de conversão.  
2. O usuário escolhe o tipo de conversão desejada, insere o valor da temperatura, e o resultado é calculado utilizando a fórmula correspondente.  
3. O programa pode realizar múltiplas conversões consecutivas até o usuário decidir encerrá-lo.  

#### Fórmulas Utilizadas  
- **Celsius para Fahrenheit:** \( F = (C \times 1.8) + 32 \)  
- **Fahrenheit para Celsius:** \( C = \frac{F - 32}{1.8} \)  
- **Celsius para Kelvin:** \( K = C + 273.15 \)  
- **Kelvin para Celsius:** \( C = K - 273.15 \)  
- **Fahrenheit para Kelvin:** \( K = \frac{F - 32}{1.8} + 273.15 \)  
- **Kelvin para Fahrenheit:** \( F = (K - 273.15) \times 1.8 + 32 \)  

---

#### Menu de Opções  

1. Celsius para Fahrenheit  
2. Fahrenheit para Celsius  
3. Celsius para Kelvin  
4. Kelvin para Celsius  
5. Fahrenheit para Kelvin  
6. Kelvin para Fahrenheit  
7. Celsius para Fahrenheit e Kelvin  
8. Fahrenheit para Celsius e Kelvin  
9. Kelvin para Celsius e Fahrenheit  
0. Sair  

---

#### Exemplo de Execução  

```plaintext
Escolha a conversão desejada:  
 1 => Celsius para Fahrenheit  
 2 => Fahrenheit para Celsius  
 3 => Celsius para Kelvin  
 4 => Kelvin para Celsius  
 5 => Fahrenheit para Kelvin  
 6 => Kelvin para Fahrenheit  
 7 => Celsius para Fahrenheit e Kelvin  
 8 => Fahrenheit para Celsius e Kelvin  
 9 => Kelvin para Celsius e Fahrenheit  
 0 => PARA SAIR  

Digite o número correspondente: 3
Digite o valor do grau a converter: 25

A conversão de 'Celsius para Kelvin' é igual a: 298.15 K
```

### Unidades de Volume 🚰

Este programa permite converter entre diferentes unidades de volume em três passos, utilizando o **litro** (L) como unidade base.

#### Unidades para conversão 🧪

Escolha entre as seguintes unidades de volume:

1. Litro (L) 🧃
2. Metro cúbico (m³) 📦
3. Mililitro (mL) 💧

#### Como Funciona ⚙️

1. **Escolha o valor** que deseja converter.
2. **Selecione a unidade de origem** de uma lista de 3 opções.
3. **Selecione a unidade de destino** de uma lista de 3 opções.
4. O programa converte o valor utilizando o **litro (L)** como base e exibe o resultado.
5. Após a conversão, o programa exibe o menu inicial, e o usuário pode usar qualquer conversor! 😄

#### Exemplo de Execução:

```plaintext
Digite o valor: 1250
Selecione a unidade de origem:
1 - Litro (L)
2 - Metro cúbico (m³)
3 - Mililitro (mL)
Opção: 3
Selecione a unidade de destino:
1 - Litro (L)
2 - Metro cúbico (m³)
3 - Mililitro (mL)
Opção: 1
Valor convertido: 1.250000
```

### Unidades
=======

### Unidade de ...


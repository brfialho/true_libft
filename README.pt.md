
*Este projeto foi criado como parte do currículo 42 por brfialho.*

---

# Libft — Minha Biblioteca Pessoal em C

## Introdução

Esta é a biblioteca que utilizo em muitos dos meus projetos da 42. Ela evoluiu junto comigo ao longo do cursus e reflete tanto minhas preferências de programação quanto minha filosofia de design, além de incluir diversas utilidades extras e melhorias em relação ao subject original.

## Filosofia de design

Muitas funções desta biblioteca intencionalmente evitam verificações defensivas e podem causar segfault em caso de uso incorreto. A ideia é que o programador seja responsável por garantir entradas válidas e o uso correto das funções.

Por exemplo, passar um ponteiro `NULL` para uma função que não espera um normalmente resultará em um segfault imediato — algo que geralmente é simples de rastrear, debugar e corrigir durante o desenvolvimento.

Eu sempre tento mover a responsabilidade para o programador, e meu código busca ser o mais modular possível.

## Funcionalidades extras

Comparada à `libft` vanilla, esta versão inclui diversas funcionalidades adicionais, como:

- Macros de conveniência
- Typedefs personalizados para ajudar com limite de linhas da Norma 42
- Funções extras para listas linkadas
- Funções extras de manipulação de strings
- funções para matrizes genéricas
- Integração com `ft_printf` e `get_next_line`
- Funções básicas auxiliares para AST
- Utilitários de ordenação para arrays de inteiros
- Funções auxiliares relacionadas a tempo

## Instruções

### Pré-requisitos

- Compilador GCC ou Clang
- GNU Make

### Compilação

Targets disponíveis:

- `make` - Compila o projeto inteiro
- `make clean` - Remove arquivos objeto
- `make fclean` - Remove todos os arquivos gerados
- `make re` - Recompila a biblioteca do zero

Exemplo:

```bash
make
```

Isso gera:

```
libft.a
```

### 1. Inclua no seu programa

```c
#include "libft.h"
```

### 2. Compile seu projeto linkando a lib

Nota: os comandos abaixo assumem que você está compilando do root da lib. Se a lib esta em outra pasta (e.g., libs/libft/), ajuste os caminhos do include -I e library -L de acordo

```bash
cc main.c -I./headers -L. -lft
```

Ou:

```bash
cc main.c -I./headers libft.a
```
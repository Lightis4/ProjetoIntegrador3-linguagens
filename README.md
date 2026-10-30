# Projeto Integrador — Sistema Acadêmico em C, C++ e Python

## Sobre o projeto

O **Projeto Integrador — 3 Linguagens** tem como objetivo desenvolver um sistema acadêmico simples utilizando as linguagens de programação **C, C++ e Python**.

A proposta é implementar o mesmo programa nas três linguagens, permitindo compreender suas diferenças de sintaxe, declaração de variáveis, entrada e saída de dados, estruturas condicionais e formas de execução.

O projeto foi desenvolvido com foco no aprendizado dos fundamentos da programação e no desenvolvimento do raciocínio lógico.

## 1. Objetivo

Desenvolver um sistema executado pelo terminal que permita cadastrar os dados básicos de um estudante, calcular sua média e informar sua situação acadêmica.

Durante o desenvolvimento, serão trabalhados os seguintes conceitos:

- Variáveis e tipos de dados.
- Entrada e saída de informações.
- Operadores aritméticos.
- Operadores relacionais e lógicos.
- Estruturas condicionais (`if`, `else if`, `else`).
- Validação de dados.
- Compilação e execução de programas.
- Organização de arquivos e códigos.

## 2. Funcionalidades do sistema

O sistema deverá permitir:

1. Informar o nome do estudante.
2. Informar o número da matrícula.
3. Inserir três notas.
4. Verificar se as notas estão entre 0 e 10.
5. Calcular a média aritmética das três notas.
6. Exibir a média com duas casas decimais.
7. Informar a situação acadêmica do estudante.
8. Apresentar mensagens para entradas inválidas.

### Critérios de avaliação

| Média          | Situação acadêmica |
| -------------- | ------------------ |
| 7,00 a 10,00   | Aprovado           |
| 5,00 a 6,99    | Recuperação        |
| Abaixo de 5,00 | Reprovado          |

### Fórmula utilizada

```text
Media = (Nota1 + Nota2 + Nota3) / 3
```

Exemplo:

```text
Nota 1 = 8
Nota 2 = 7
Nota 3 = 9

Media = (8 + 7 + 9) / 3
Media = 8.00

Situacao: Aprovado
```

## 3. Tecnologias utilizadas

| Tecnologia | Finalidade                         |
| ---------- | ---------------------------------- |
| C          | Desenvolvimento da primeira versão |
| C++        | Desenvolvimento da segunda versão  |
| Python     | Desenvolvimento da terceira versão |
| GCC        | Compilação do código C             |
| G++        | Compilação do código C++           |
| VS Code    | Ambiente de desenvolvimento        |
| Git        | Controle de versões                |
| GitHub     | Hospedagem do projeto              |

## 4. Estrutura do projeto

```text
ProjetoIntegrador3-linguagens/
│
├── C/
│   └── sistema_academico.c
│
├── CPP/
│   └── sistema_academico.cpp
│
├── Python/
│   └── sistema_academico.py
│
│
└── README.md
```

Cada linguagem possui sua própria pasta, permitindo manter as implementações organizadas e independentes.

## 5. Requisitos para execução

Para executar as três versões, é necessário possuir:

- Visual Studio Code ou outro editor de código.
- GCC para compilar programas em C.
- G++ para compilar programas em C++.
- Python 3 instalado.

No Windows, os compiladores GCC e G++ podem ser instalados utilizando o MSYS2.

### Verificar as ferramentas instaladas

Abra o terminal e execute:

```bash
gcc --version
g++ --version
python --version
```

Caso as versões sejam exibidas, as ferramentas estão disponíveis.

## 6. Como executar o projeto

### Clonar o repositório

```bash
git clone https://github.com/Lightis4/ProjetoIntegrador3-linguagens.git
```

Acesse a pasta:

```bash
cd ProjetoIntegrador3-linguagens
```

### Executar em C

Entre na pasta:

```bash
cd C
```

Compile o programa:

```bash
gcc sistema_academico.c -o sistema_academico.exe
```

Execute no PowerShell:

```powershell
.\sistema_academico.exe
```

### Executar em C++

A partir da pasta principal do projeto:

```bash
cd CPP
```

Compile:

```bash
g++ sistema_academico.cpp -o sistema_academico.exe
```

Execute no PowerShell:

```powershell
.\sistema_academico.exe
```

### Executar em Python

A partir da pasta principal do projeto:

```bash
cd Python
```

Execute:

```bash
python sistema_academico.py
```

**Observação:** os comandos `cd C`, `cd CPP` e `cd Python` consideram que o terminal está na pasta principal do projeto. Caso esteja dentro de outra pasta, utilize `cd ..` para retornar.

## 7. Exemplo de funcionamento

```text
=================================
       SISTEMA ACADEMICO
=================================

Digite seu nome: Maria Silva
Digite sua matricula: 2026001

Digite a primeira nota: 8
Digite a segunda nota: 7
Digite a terceira nota: 9

=================================
       RESULTADO ACADEMICO
=================================

Aluno: Maria Silva
Matricula: 2026001

Media: 8.00
Situacao: Aprovado
```

A aparência exata da saída poderá variar entre as implementações, mas todas deverão apresentar as informações solicitadas.

## 8. Testes de funcionamento

Para verificar o funcionamento, utilize diferentes combinações de notas.

| Teste | Nota 1 | Nota 2 | Nota 3 | Resultado esperado |
| ----- | -----: | -----: | -----: | ------------------ |
| 1     |      8 |      7 |      9 | Aprovado           |
| 2     |      5 |      6 |      6 | Recuperação        |
| 3     |      2 |      3 |      4 | Reprovado          |
| 4     |     10 |     10 |     10 | Aprovado           |
| 5     |      0 |      0 |      0 | Reprovado          |
| 6     |     11 |      7 |      8 | Nota inválida      |
| 7     |     -1 |      5 |      7 | Nota inválida      |
| 8     |    abc |      7 |      8 | Entrada inválida   |

As três implementações deverão apresentar resultados equivalentes para os mesmos dados.

## 9. Comparação entre as linguagens

Embora o objetivo do sistema seja o mesmo, cada linguagem possui características próprias.

### Linguagem C

C é uma linguagem compilada que exige a declaração explícita dos tipos das variáveis.

Exemplo:

```c
float nota1, nota2, nota3, media;

printf("Digite a primeira nota: ");
scanf("%f", &nota1);
```

### Linguagem C++

C++ também é uma linguagem compilada e permite utilizar recursos como `cin` e `cout` para entrada e saída de dados.

Exemplo:

```cpp
float nota1, nota2, nota3, media;

cout << "Digite a primeira nota: ";
cin >> nota1;
```

### Linguagem Python

Python possui uma sintaxe mais simples e não exige a declaração explícita dos tipos das variáveis.

Exemplo:

```python
nota1 = float(input("Digite a primeira nota: "))
```

### Comparação geral

| Característica    | C              | C++            | Python      |
| ----------------- | -------------- | -------------- | ----------- |
| Tipagem           | Estática       | Estática       | Dinâmica    |
| Compilação manual | Sim            | Sim            | Não         |
| Entrada de dados  | `scanf()`      | `cin`          | `input()`   |
| Saída de dados    | `printf()`     | `cout`         | `print()`   |
| Condicionais      | `if / else if` | `if / else if` | `if / elif` |
| Extensão          | `.c`           | `.cpp`         | `.py`       |

## 10. Conceitos trabalhados

### Variáveis

São utilizadas para armazenar informações como nome, matrícula e notas.

### Entrada de dados

Permite receber as informações digitadas pelo usuário.

### Operadores aritméticos

São utilizados para realizar o cálculo da média.

### Estruturas condicionais

Permitem verificar a média e determinar a situação acadêmica do estudante.

### Validação de dados

Impede que notas fora do intervalo permitido sejam utilizadas no cálculo.

### Compilação

Nas linguagens C e C++, o código-fonte precisa ser compilado para gerar um programa executável.

Em Python, o código pode ser executado diretamente pelo interpretador, sem uma etapa manual de compilação.

## 11. Resultados esperados

Ao concluir o desenvolvimento, espera-se obter três implementações funcionais do mesmo sistema acadêmico.

O projeto permitirá compreender como diferentes linguagens podem resolver um mesmo problema, mesmo utilizando sintaxes e recursos distintos.

Também proporcionará uma base para o desenvolvimento de projetos mais avançados.

## 12. Considerações finais

O Projeto Integrador — 3 Linguagens representa uma oportunidade de aplicar conhecimentos fundamentais de programação em uma atividade prática.

Por meio da implementação do sistema acadêmico em C, C++ e Python, será possível desenvolver habilidades relacionadas à lógica de programação, organização de código, validação de informações e resolução de problemas.

O foco principal é compreender o funcionamento do algoritmo e as particularidades de cada linguagem.

---

**Projeto:** Projeto Integrador — 3 Linguagens

**Sistema:** Sistema Acadêmico

**Linguagens:** C, C++ e Python

**Repositório:** [https://github.com/Lightis4/ProjetoIntegrador3-linguagens](https://github.com/Lightis4/ProjetoIntegrador3-linguagens)

**Finalidade:** Aprendizado e prática de programação.

Desenvolvedor : Pedro Henrique Barbosa Nogueira.

Curso : Ciências da Computação - Uni Nassau.

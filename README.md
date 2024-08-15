# Estrutura de Fila com Incremento Circular em C++

Este projeto implementa uma estrutura de dados Fila utilizando um vetor com a técnica de incremento circular em C++. A fila é uma estrutura de dados que segue o princípio FIFO (First In, First Out), onde o primeiro elemento inserido é o primeiro a ser removido.

## Funcionalidades

A implementação da Fila inclui as seguintes operações:

- **Inserir no fim da fila:** Adiciona um elemento no final da fila.
- **Remover do início da fila:** Remove o elemento que está no início da fila.
- **Consultar o início da fila:** Retorna o valor do elemento no início da fila, sem removê-lo.
- **Verificar se a fila está vazia:** Verifica se não há elementos na fila.
- **Verificar se a fila está cheia:** Verifica se a fila atingiu sua capacidade máxima.

## Estrutura do Projeto

- `main.cpp`: Contém a implementação da classe `Fila` e o código para testar suas funcionalidades.
- `Makefile`: Arquivo para automatizar o processo de compilação e execução do código.

## Compilação e Execução

### Compilando o Código

Para compilar o projeto, utilize o `Makefile` fornecido. Execute o seguinte comando no terminal:

```bash
make

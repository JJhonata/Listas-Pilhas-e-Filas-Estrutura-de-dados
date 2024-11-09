# 📚 Gerenciamento de Fila Circular em C

Este projeto implementa uma fila circular simples em C com operações básicas de enfileiramento e desenfileiramento. A fila é limitada a um tamanho máximo definido como `MAX`.

## 📄 Descrição

O código demonstra o uso de uma fila circular com as seguintes operações:

- **Enfileirar**: Adicionar um elemento ao final da fila.
- **Desenfileirar**: Remover um elemento do início da fila.
- **Imprimir**: Exibir os elementos atuais da fila.

## 🔧 Estrutura do Código

### Constantes e Variáveis

- `MAX`: Define o tamanho máximo da fila.
- `fila[MAX]`: Array que armazena os elementos da fila.
- `frente`: Índice do início da fila.
- `tras`: Índice do final da fila.
- `tamanho`: Número de elementos atuais na fila.

### Funções

- **`filaCheia()`**: Verifica se a fila está cheia.
- **`filaVazia()`**: Verifica se a fila está vazia.
- **`enfileirar(int valor)`**: Adiciona um valor à fila. Retorna `true` se bem-sucedido e `false` se a fila estiver cheia.
- **`desenfileirar(int *valor)`**: Remove um valor da fila e o armazena na variável fornecida. Retorna `true` se bem-sucedido e `false` se a fila estiver vazia.
- **`imprimirFila()`**: Exibe os elementos atuais da fila.

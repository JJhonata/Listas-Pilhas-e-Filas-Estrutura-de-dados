# 📚 Exercícios em C

## Exercício 5.1.1: Fila em Vetor

Neste exercício, você vai trabalhar com uma fila armazenada em um vetor `f[0..N-1]`. A parte do vetor ocupada pela fila é `f[s..t]`. 

- **Remover um elemento da fila**: 
  Para remover um elemento da fila, use o comando `x = f[s++];`, onde `x` é o elemento removido e `s` é o índice de início da fila.

- **Inserir um objeto na fila**: 
  Para adicionar um novo objeto `y` à fila, use o comando `f[t++] = y;`, onde `t` é o índice do fim da fila.

## Exercício 6.1.1: Pilha em Vetor

Neste exercício, você vai implementar uma pilha armazenada em um vetor `p[0..N-1]`. A parte do vetor efetivamente ocupada pela pilha é `p[0..t]`.

- **Remover um elemento da pilha**: 
  Para remover um elemento do topo da pilha, use o comando `x = p[t--];`, onde `x` é o elemento removido e `t` é o índice do topo da pilha.

- **Inserir um objeto na pilha**: 
  Para adicionar um novo objeto `y` à pilha, use o comando `p[++t] = y;`, onde `t` é incrementado antes da inserção.

## Exercício 6.1.2: Inversão de Palavras

Neste exercício, você vai escrever uma função que inverte a ordem das letras de cada palavra em uma sentença, preservando a ordem das palavras.

- **Descrição**: A função deve inverter cada palavra individualmente em uma sentença, mantendo a ordem das palavras. Por exemplo, a aplicação da operação à sentença `"AMU MEGASNEM ATERCES"` deve produzir `"UMA MENSAGEM SECRETA"`.


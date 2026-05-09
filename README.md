# Atividade Avaliativa 1 - Recursividade em C

# Exercício 1 - Fibonacci Ingênuo

Implementação recursiva da sequência de Fibonacci sem otimização.

## Caso base

Quando `n` é 0 ou 1.

## Redução do problema

A função chama `fib(n-1)` e `fib(n-2)`.

## Objetivo

Demonstrar a ineficiência da recursão simples através da contagem de chamadas.

---

# Exercício 2 - Fibonacci com Memoização

Versão otimizada utilizando memoização com alocação dinâmica.

## Caso base

Quando `n` é 0 ou 1.

## Redução do problema

A função continua usando recursão, porém armazena resultados já calculados.

## Objetivo

Comparar desempenho com a versão ingênua.

---

# Exercício 3 - Torres de Hanoi

Implementação recursiva para resolução do problema clássico.

## Caso base

Quando há apenas 1 disco.

## Redução do problema

Mover `n-1` discos recursivamente entre as torres.

## Objetivo

Exibir os movimentos necessários e o total de operações.

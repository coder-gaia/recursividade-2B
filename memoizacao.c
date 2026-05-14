#include <stdio.h>
#include <stdlib.h>

// Fibonacci ingênuo
long long fibonacciIngenuo(int n, long long *chamadasIngenua)
{
    (*chamadasIngenua)++;

    // Caso base:
    // retorna n quando n é 0 ou 1
    if (n == 0 || n == 1)
    {
        return n;
    }

    // Redução do problema:
    // divide em n-1 e n-2
    return fibonacciIngenuo(n - 1, chamadasIngenua) +
           fibonacciIngenuo(n - 2, chamadasIngenua);
}

// Fibonacci com memoização
long long fibonacciMemo(int n, long long *memo, long long *chamadasMemo)
{
    (*chamadasMemo)++;

    // Caso base:
    // retorna n quando n é 0 ou 1
    if (n == 0 || n == 1)
    {
        return n;
    }

    // Se já foi calculado, reutiliza
    if (memo[n] != -1)
    {
        return memo[n];
    }

    // Redução do problema:
    // calcula n-1 e n-2 recursivamente
    memo[n] = fibonacciMemo(n - 1, memo, chamadasMemo) +
              fibonacciMemo(n - 2, memo, chamadasMemo);

    return memo[n];
}

int main()
{
    int n;

    long long chamadasIngenua = 0;
    long long chamadasMemo = 0;

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    // Alocação dinâmica do cache
    long long *memo = malloc((n + 1) * sizeof(long long));

    if (memo == NULL)
    {
        printf("Erro de alocacao de memoria.\n");
        return 1;
    }

    // Inicializa todas as posições com -1
    for (int i = 0; i <= n; i++)
    {
        memo[i] = -1;
    }

    long long resultadoIngenuo =
        fibonacciIngenuo(n, &chamadasIngenua);

    long long resultadoMemo =
        fibonacciMemo(n, memo, &chamadasMemo);

    printf("\n=== Comparacao ===\n");

    printf("\nFibonacci ingenuo(%d) = %lld\n",
           n, resultadoIngenuo);

    printf("Chamadas ingenuas: %lld\n",
           chamadasIngenua);

    printf("\nFibonacci memoizado(%d) = %lld\n",
           n, resultadoMemo);

    printf("Chamadas memoizadas: %lld\n",
           chamadasMemo);

    free(memo);

    return 0;
}
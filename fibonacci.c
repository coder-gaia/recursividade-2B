#include <stdio.h>

long long fibonacci(int n, long long *chamadas)
{
    (*chamadas)++;

    // Caso base:
    // se n for 0 ou 1, retorna o próprio valor

    if (n == 0 || n == 1)
    {
        return n;
    }

    // Redução do problema:
    // calcula fibonacci de n-1 e n-2
    return fibonacci(n - 1, chamadas) +
           fibonacci(n - 2, chamadas);
}

int main()
{
    int n;
    long long chamadas = 0;

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    long long resultado = fibonacci(n, &chamadas);

    printf("\nFibonacci(%d) = %lld\n", n, resultado);
    printf("Quantidade de chamadas recursivas: %lld\n", chamadas);

    return 0;
}
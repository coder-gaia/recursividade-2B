#include <stdio.h>

long long chamadas = 0;

long long fibonacci(int n)
{
    chamadas++;

    // caso padão
    // se 'n' for 0 ou 1, retorna o próprio valor
    if (n == 0 || n == 1)
    {
        return n;
    }

    // redução do problema:
    // calcula fibonacci de n-1 e n-2
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    printf("Digite um valor para n: ");
    scanf("%d", &n);

    long long resultado = fibonacci(n);

    printf("\nFibonacci(%d) = %lld\n", n, resultado);
    printf("Quantidade de chamadas recursivas: %lld\n", chamadas);

    return 0;
}
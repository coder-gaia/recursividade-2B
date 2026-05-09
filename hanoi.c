#include <stdio.h>

void hanoi(int n, char origem, char destino, char auxiliar, int *movimentos)
{

    // Caso padrão:
    // quando existe apenas 1 disco
    if (n == 1)
    {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        (*movimentos)++;
        return;
    }

    // Redução do problema:
    // move n-1 discos recursivamente
    // origem, auxiliar usando destino
    hanoi(n - 1, origem, auxiliar, destino, movimentos);

    printf("Mover disco %d de %c para %c\n", n, origem, destino);
    (*movimentos)++;

    // auxiliar para destino usando origem
    hanoi(n - 1, auxiliar, destino, origem, movimentos);
}

int main()
{
    int n;
    int movimentos = 0;

    printf("Digite a quantidade de discos: ");
    scanf("%d", &n);

    printf("\nMovimentos:\n");

    hanoi(n, 'A', 'C', 'B', &movimentos);

    printf("\nTotal de movimentos: %d\n", movimentos);

    return 0;
}
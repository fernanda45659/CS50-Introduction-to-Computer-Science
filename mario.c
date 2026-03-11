#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // 1. Pedir a altura ao usuário
    int n;
    do
    {
        n = get_int("Altura: ");
    }
    while (n < 1 || n > 8);

    // 2. Para cada linha (de 0 até n)
    for (int i = 0; i < n; i++)
    {
        // Para cada tijolo na linha (imprime hashtags)
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        
        // Pular para a próxima linha
        printf("\n");
    }
}

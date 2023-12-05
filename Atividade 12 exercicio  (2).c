#include <stdio.h>
#include <stdlib.h>

void totalGratuitas(int locacoes[500], int gratuitas[500])
{
    for (int i = 0; i < 500; i++)
    {
        gratuitas[i] = locacoes[i] / 15;
    }
}

int main()
{
    int locacoes[500], gratuitas[500];

    for (int i = 0; i < 500; i++)
    {
        locacoes[i] = rand() % 100 + 1;
    }

    totalGratuitas(locacoes, gratuitas);

    printf("Quantidade de locações gratuitas para cada cliente:\n");
    for (int i = 0; i < 500; i++)
    {
        printf("%d: %d locações gratuitas\n", i + 1, gratuitas[i]);
    }

    return 0;
}
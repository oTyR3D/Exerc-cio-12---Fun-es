#include<stdio.h>

void imprimir(int matriz[61][10]){
    for (int i = 0; i < 61; i++)
    {
        for (int j = 0; j < 10; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void somaColunas(int matriz[61][10]){
    for(int j = 0; j < 10; j++){
        matriz[60][j] = 0;
    }
    for (int j = 0; j < 10; j++)
    {
        for (int i = 0; i < 61; i++)
        {
            matriz[60][j] += matriz[i][j];
        }
    }
}

int main(){
    int matriz[61][10];
    for (int i = 0; i < 61; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matriz[i][j] = i * 10 + j;
        }
    }

    printf("Matriz original:\n");
    imprimir(matriz);
    printf("\n");

    somaColunas(matriz);

    printf("Matriz com a soma das colunas na linha 61:\n");
    imprimir(matriz);

    return 0;
}

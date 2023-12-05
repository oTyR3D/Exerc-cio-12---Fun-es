#include <stdio.h>

int escolherOpcao();
void opcaoAVista(float totalCompra);
void opcaoDuasParcelas(float totalCompra);
void opcaoMaisDeTresParcelas(float totalCompra);

int main()
{
    int opcao;
    float totalCompra;

    printf("Informe o valor total da compra: ");
    scanf("%f", &totalCompra);

    opcao = escolherOpcao();

    switch (opcao)
    {
    case 1:
        opcaoAVista(totalCompra);
        break;
    case 2:
        opcaoDuasParcelas(totalCompra);
        break;
    case 3:
        opcaoMaisDeTresParcelas(totalCompra);
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    return 0;
}

int escolherOpcao()
{
    int opcao;
    do
    {
        printf("1 - À vista com 10%% de desconto\n");
        printf("2 - Em duas vezes (preço da etiqueta)\n");
        printf("3 - De 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00)\n");
        printf("Escolha a opção desejada: ");
        scanf("%d", &opcao);
        if (opcao < 1 || opcao > 3)
        {
            printf("Opção inválida. Escolha novamente.\n");
        }
    } while (opcao < 1 || opcao > 3);
    return opcao;
}

void opcaoAVista(float totalCompra)
{
    float desconto = totalCompra * 0.10;
    float valorFinal = totalCompra - desconto;

    printf("\nValor do desconto: R$%.2f\n", desconto);
    printf("Valor Final: R$%.2f\n", valorFinal);
}

void opcaoDuasParcelas(float totalCompra)
{
    float valorParcela = totalCompra / 2;

    printf("\nValor da Compra: R$%.2f\n", totalCompra);
    printf("Valor da Parcela (duas vezes): R$%.2f\n", valorParcela);
}

void opcaoMaisDeTresParcelas(float totalCompra)
{
    if (totalCompra <= 100.0)
    {
        printf("Para parcelamento de 3 a 10 vezes é necessário que o total da compra seja acima de R$ 100,00\n");
        return;
    }

    int numParcelas;
    float juros, valorFinal, valorParcela;

    do
    {
        printf("Digite a quantidade de parcelas desejada (3 a 10): ");
        scanf("%d", &numParcelas);
        if (numParcelas < 3 || numParcelas > 10)
        {
            printf("Quantidade de parcelas inválida. Escolha entre 3 e 10.\n");
        }
    } while (numParcelas < 3 || numParcelas > 10);

    juros = totalCompra * 0.03;
    valorFinal = totalCompra + juros;
    valorParcela = valorFinal / numParcelas;

    printf("\nValor Final (com juros): R$%.2f\n", valorFinal);
    printf("Valor total dos juros: R$%.2f\n", juros);
    printf("Valor da Parcela: R$%.2f\n", valorParcela);
}
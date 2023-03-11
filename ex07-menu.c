#include <stdio.h>

int menu();
int soma(int num1, int num2);
void tabuada(int num1);
int maior(int num1, int num2, int num3);
int main()
{
    int opcao=1, num1, num2, num3, resultado;
    while (opcao != 0)
    {
        opcao = menu();
        switch (opcao)
        {
        case 1:
            printf("Digite 2 números: ");
            scanf("%d %d", &num1, &num2);
            resultado = soma(num1, num2);
            printf("Soma: %d\n", resultado);
            break;
        case 2:
            printf("Digite um número: ");
            scanf("%d", &num1);
            tabuada(num1);
            break;
        case 3:
            printf("Digite 3 números: ");
            scanf("%d %d %d", &num1, &num2, &num3);
            resultado = maior(num1, num2, num3);
            printf("Maior: %d\n", resultado);
            break;
        case 0:
            printf("Já vai tarde! Animal!!!\n");
            break;
        default:
            printf("Opção inválida!!!\n");
        }
    }
}

int menu()
{   
    int opcao;
    printf("---------- M E N U -----------\n");
    printf("[1]Soma\n");
    printf("[2]Tabuada\n");
    printf("[3]Maior\n");
    printf("[0]Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    return opcao;
}
int soma(int num1, int num2)
{
    return num1 + num2;
}
void tabuada(int num1)
{
    for (int i = 1; i < 11; i++)
        printf("%d * %d = %d\n", num1, i, num1 * i);
}
int maior(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
        return num1;
    else if (num2 > num1 && num2 > num3)
        return num2;
    else
        return num3;
}
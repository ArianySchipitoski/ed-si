#include <stdio.h>

int main()
{
    int opcao, num1, num2, num3;
    while (opcao != 0)
    {
        printf("---------- M E N U -----------\n");
        printf("[1]Soma\n");
        printf("[2]Tabuada\n");
        printf("[3]Maior\n");
        printf("[0]Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Digite 2 números: ");
            scanf("%d %d", &num1, &num2);
            printf("Soma: %d\n", num1 + num2);
            break;
        case 2:
            printf("Digite um número: ");
            scanf("%d", &num1);
            for (int i = 1; i < 11; i++)
                printf("%d * %d = %d\n", num1, i, num1 * i);
            break;
        case 3:
            printf("Digite 3 números: ");
            scanf("%d %d %d", &num1, &num2, &num3);
            if (num1 > num2 && num1 > num3)
                printf("Maior: %d\n", num1);
            else if (num2 > num1 && num2 > num3)
                printf("Maior: %d\n", num2);
            else
                printf("Maior: %d\n", num3);
            break;
        case 0:
            printf("Já vai tarde! Animal!!!\n");
            break;
        default:
            printf("Opção inválida!!!\n");
        }
    }
}
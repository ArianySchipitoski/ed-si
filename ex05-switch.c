#include <stdio.h>

int main(){
    float num1, num2;
    char operador;
    printf("Digite a operação: ");
    scanf("%f %c %f",&num1, &operador, &num2);
    switch (operador)
    {
        case '+': printf("soma: %g\n",num1+num2);break;
        case '-': printf("subt: %g\n",num1-num2);break;
        case '.':
        case '*': printf("mult: %g\n",num1*num2);break;
        case '/': printf("divi: %g\n",num1/num2);break;
        default:printf("Operação inválida!!!\n");
    }
}
/*
1. Faça um programa que receba dois números inteiros, calcule e imprima: 
• soma dos dois números;
• subtração do primeiro pelo segundo;
• subtração do segundo pelo primeiro;
• multiplicação dos dois números;
• divisão do primeiro pelo segundo (resultado em real);
• divisão do segundo pelo primeiro (resultado em real);
• quociente inteiro da divisão do primeiro pelo segundo;
• quociente inteiro da divisão do segundo pelo primeiro;
• resto da divisão do primeiro pelo segundo;
• resto da divisão do segundo pelo primeiro.*/
#include <stdio.h>

int main(){
    int num1, num2;
    printf("Digite 2 números inteiros: ");
    scanf("%d %d", &num1, &num2);
    printf("Soma.........: %d\n",num1+num2);
    printf("Subtração....: %d\n",num1-num2);
    printf("Subtração....: %d\n",num2-num1);
    printf("Multiplicação: %d\n",num1*num2);
    printf("Divisão......: %f\n",(float)num1/num2);
    printf("Divisão......: %f\n",(float)num2/num1);
    printf("Quociente....: %d\n",num1/num2);
    printf("Quociente....: %d\n",num2/num1);
    printf("Resto........: %d\n",num1%num2);
    printf("Resto........: %d\n",num2%num1);
}
#include <stdio.h>
#include <math.h>

int main(){
    float numero;
    int numeroInteiro;
    printf("Digite um número real: ");
    scanf("%f",&numero);
    numeroInteiro = numero;
    printf("Parte inteira do número: %d\n",numeroInteiro);
    printf("Parte fracionada do número: %g\n",numero - numeroInteiro);
    printf("Número arredondado: %g\n",ceil(numero));
    printf("Número arredondado: %g\n",floor(numero));
}
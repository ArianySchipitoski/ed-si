#include <stdio.h>
/*
7. Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é um valor inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva. A seguir: 

a) Se i=1 escrever os três valores a, b, c em ordem crescente. 
b) Se i=2 escrever os três valores a, b, c em ordem decrescente. 
c) Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois.
*/
int main(){
    int i;
    float a, b, c;
    printf("-----MENU-----\n");
    printf("[1] ordem crescente\n");
    printf("[2] ordem decrescente\n");
    printf("[3] maior no meio\n");
    printf("Escolha a opção: ");
    scanf("%d",&i);
    printf("Digite os 3 valores reais: ");
    scanf("%f %f %f",&a, &b, &c);
    if(i == 1){
        printf("--- Ordem crescente ---\n");
        if(a<b && a<c){
            if(b<c) printf("%g < %g < %g\n",a,b,c);
            else printf("%g < %g < %g\n",a,c,b);
        }
        else if(b<a && b<c) {
            if(a<c) printf("%g < %g < %g\n",b,a,c);
            else printf("%g < %g < %g\n",b,c,a);
        }
        else {
            if(a<b) printf("%g < %g < %g\n",c,a,b);
            else printf("%g < %g < %g",c,b,a);
        }
    }
    else if(i == 2){
        printf("--- Ordem decrescente ---\n");
        if(a>b && a>c){
            if(b>c) printf("%g > %g > %g\n",a,b,c);
            else printf("%g > %g > %g\n",a,c,b);
        }
        else if(b>a && b>c) {
            if(a>c) printf("%g > %g > %g\n",b,a,c);
            else printf("%g > %g > %g\n",b,c,a);
        }
        else {
            if(a>b) printf("%g > %g > %g\n",c,a,b);
            else printf("%g > %g > %g",c,b,a);
        }
    }
    else if(i == 3){
        printf("--- Maior no meio ---\n");
        if(a>b && a>c) printf("%g > %g > %g\n",b,a,c);
        else if(b>a && b>c) printf("%g > %g > %g\n",a,b,c);
        else printf("%g > %g > %g\n",a,c,b);
    }
    else{
        printf("Opção inválida!\n");
    }
}
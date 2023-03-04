#include <stdio.h>
//Protótipo = declaração da função
void soma(int num1, int num2);
void subtracao();

int main(){
    int n1, n2;
    printf("Digite 2 valores inteiros: ");
    scanf("%d %d",&n1, &n2);
    soma(n1,n2);         //Chamada da função
    subtracao();    //Chamada da função
    soma(10,20);         //Chamada da função
    subtracao();         //Chamada da função
}

void soma(int num1, int num2){        //Construção da função
    printf("Soma: %d\n", num1+num2);
}
void subtracao(){
    printf("Subtraçao: %d\n",4-2);
}

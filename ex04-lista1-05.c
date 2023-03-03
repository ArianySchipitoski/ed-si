#include <stdio.h>
/*5. Tendo como dados de entrada a altura e o sexo de uma pessoa (?M? masculino e ?F? feminino), construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
- para homens: (72.7*h)-58
- para mulheres: (62.1*h)-44.7
*/
int main(){
    float altura;
    char sexo;
    printf("Digite a altura: ");
    scanf("%f",&altura);
    printf("Digite o sexo: ");
    scanf(" %c",&sexo);
    if(sexo == 'm')
        printf("para homens..: %g\n",(72.7*altura)-58);
    else
        printf("para mulheres: %g\n",(62.1*altura)-44.7);
}
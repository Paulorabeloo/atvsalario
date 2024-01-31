#include <stdio.h>
int main() {
    float numf, numht, vh, salario;
    printf("Digite o número do funcionário:\n");
    scanf("%f", &numf);
    printf("Digite o número de horas trabalhadas:\n");
    scanf("%f", &numht);
    printf("Digite o valor que ele recebo por hora:\n");
    scanf("%f", &vh);
    salario = numht * vh;
    printf("Número funcionario: %0.f, salario total: %.2f R$.", numf, salario);
return 0;
}

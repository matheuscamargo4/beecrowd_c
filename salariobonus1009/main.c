#include <stdio.h>

int main (){
	
	char nome[21];
	double salario, montante, vendas;

	scanf("%20s", &nome);
	scanf("%lf %lf", &salario, &vendas);

	montante = vendas * 0.15;
	double total = salario + montante;

	printf("TOTAL = R$ %.2lf\n", total);

	return 0;
}

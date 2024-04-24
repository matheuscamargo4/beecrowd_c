#include <stdio.h>

int main (){
	
	int a, b;
	double c;

	scanf("%d %d", &a, &b);
	scanf("%lf", &c);
	
	c = c * b;

	printf("NUMBER = %d\nSALARY = U$ %.2lf\n", a, c);
}

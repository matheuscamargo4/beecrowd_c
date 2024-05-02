#include <stdio.h>

int main(void) {

  double matriz[12][12] = {0};
  int C;
  char op;
  double soma = 0.0;
  int i, j;

  scanf("%d", &C);
  scanf(" %c", &op);

  for (i = 0; i < 12; i++){
    for (j = 0; j < 12; j++){
      scanf("%lf", &matriz[i][j]);
    }
  }

  for(i = 0; i < 12; i++){
    soma += matriz[i][C];
  }

  if (op == 'S'){
    printf("%.1lf\n", soma);
  }
  else if (op == 'M'){
    soma /= 12.0;
    printf("%.1lf\n", soma);
  }

  return 0;
}

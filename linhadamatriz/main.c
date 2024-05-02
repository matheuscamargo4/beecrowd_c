#include <stdio.h>

int main(void) {
 double matriz [12][12];
 int L;
 char op[5];
 int i, j;
 double soma = 0.0;
  
  scanf("%d", &L);
  scanf("%s", op);

  for (i = 0; i < 12; i++){
    for (j = 0; j < 12; j++){
      scanf("%lf", &matriz[i][j]);
    }
  }

  for(j = 0; j < 12; j++){
    soma += matriz[L][j];
  }

  if (op[0] == 'S'){
    printf("%.1lf\n", soma);
  }

  else if(op[0] == 'M'){
    soma /= 12.0;
    printf("%.1lf\n", soma);
  } 

return 0;
}

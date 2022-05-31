#include <stdio.h>
int main() {
  int n, i;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  }
  return 0;
}


enter an integer: 3
3 * 1 = 3 
3 * 2 = 6 
3 * 3 = 9 
3 * 4 = 12 
3 * 5 = 15 
3 * 6 = 18 
3 * 7 = 21 
3 * 8 = 24 
3 * 9 = 27 
3 * 10 = 30 
#include <stdio.h>
 
int main(void)
{
  int a;
 
  printf("Input arus: ");
  scanf("%d",&a);
 
  printf("\n");
 
  if (a % 2 == 0) {
    printf("%d lampu dimatikan \n", a);
  }
  if (a % 2 == 1) {
    printf("%d lampu dinyalakan \n", a);
  }
 
  return 0;
}

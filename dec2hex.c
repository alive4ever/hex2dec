#include <stdio.h>

int input_dec();

int main()
{
  int a = input_dec();
  printf("%d in hexadecimal is 0x%x\n", a, a);
}

int input_dec()
{
  int a;
  printf("Enter decimal number to convert: ");
  scanf("%d", &a);
  return(a);
}

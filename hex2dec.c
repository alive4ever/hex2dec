#include <stdio.h>

int input_hex();

int main()
{
  int a = input_hex();
  printf("0x%x in decimal is %d\n", a, a);
  return(0);
}

int input_hex()
{
  int a;
  printf("Input hex number to convert: ");
  scanf("%x", &a);
  return(a);
}

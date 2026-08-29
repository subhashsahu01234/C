#include <stdio.h>
int main() {
  int a, b;
  printf("Enter a number a: ");
  scanf("%d", &a);
  printf("Enter a number b: ");
  scanf("%d", &b);

  printf("a&b= %d\n", a & b);
  printf("a|b= %d\n", a | b);
  printf("a^b= %d\n", a ^ b);
}
#include <stdio.h>

int main()
{
    int num;

 printf("Input any integer: ");
 scanf("%d", &num);

    switch (num > 0)
{
    case 1:
 printf("The integer is a positve number");
 break;

    case 0:
    switch (num < 0)
{
     case 1:
  printf("The integer is a negative number");
  break;
     case 0:
  printf("The integer is a zero number");
  break;
}
  break;
 }

  return 0;
}
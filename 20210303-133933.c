#include<stdio.h>
  int main(){
  int n, reverse=0, rem;
printf("Input any Integer: ");
scanf("%d", &n);
  while(n!=0)
{
    rem=n%10;
    reverse=reverse*10+rem;
    n/=10;
}
printf("Revised numbers is: %d", reverse );
return 0;
}
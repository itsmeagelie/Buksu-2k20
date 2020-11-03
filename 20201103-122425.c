#include<stdio.h>

int main()
{
   int sec, h, m, s;
   printf("Enter time in secods: ");
   scanf("%d", &sec);
   h = sec/3600;
   m = (sec - h*3600)/60;
   s = sec - h*3600 - m*60;
   printf("%d seconds = %d hours : %d minutes : %d seconds", sec, h, m, s);
   return 0;
}
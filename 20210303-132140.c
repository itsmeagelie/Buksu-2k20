#include<stdio.h>
int main()
{
    int a, b, sum, multiple, divide, diff ;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    
    sum = a+b;
    printf("a+b = %d\n",sum);
    
    multiple = a*b;
    printf("a*b = %d\n", multiple);
    
    divide = a/b;
    printf("a/b = %d\n", divide);
    
    diff = a-b;
    printf("a-b = %d\n",diff);
    
    return 0;
}
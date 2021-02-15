#include<stdio.h>
int addNumbers(int func_num1, int func_num2);

int main()
{

   int math, eng, sci, comp, phy, sum;

   printf("Enter the marks of Math: ");
   scanf("%d",&math);
   printf("Enter the marks of English: ");
   scanf("%d",&eng);
   printf("Enter the marks of Science: ");
   scanf("%d",&sci);
   printf("Enter the marks of Computer: ");
   scanf("%d",&comp);
   printf("Enter the marks of Physics: ");
   scanf("%d",&phy);
   //pass arguments
   sum = math+eng+sci+comp+phy;
   printf("math+eng+sci+comp+phy = %d\n",sum);

   int avg=(math+eng+sci+comp+phy)/5;
   printf("Average marks %d:",avg);

   return 0;
}

//return value type is int
int addNumbers(int func_num1, int func_num2)
{
   int func_sum;
   func_sum = func_num1+func_num2;
   return func_sum;
}
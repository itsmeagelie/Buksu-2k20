#include<stdio.h>
int main()
{

int math, phy, chem, eng, bio;

printf("Enter the marks of math:");
scanf("%d", &math);

printf("Enter the marks of physics");
scanf("%d", &phy);

printf("Enter the marks of chemistry");
scanf("%d", &chem);

printf("Enter the marks of english");
scanf("%d", &eng);

printf("Enter the marks of biology");
scanf("%d", &bio);

int avg=(math+phy+chem+eng+bio)/5;

printf("Average marks %d:",avg);

return;

}
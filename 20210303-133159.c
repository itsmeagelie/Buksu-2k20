#include<stdio.h>
#include<conio.h>
int main()
{
    char name[10];
    printf("Enter name: ");
    scanf("%s",&name);
    char age[5];
    printf("Enter age: ");
    scanf("%s",&age);

    if(age>=18)
    {
        printf("You are eligible for voting");
    }
    else
    {
        printf("You are not eligible for voting");
    }
    getch();
    
    return 0;
}
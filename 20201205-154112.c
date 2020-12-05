# include <stdio.h>
int main()
{
    int i=1,c;
    printf("The number from 1 to 40 which are not divisible\nby 3 are:\n\n");
    for(i=1;i<=50;i++)
    {
        /*condition to check numbers not divisible by 3.*/
        if(((i%3!=0)))
        {
             printf("%d ",i);
        }
    }
    printf("n\n Total count = %d",c);
    return 0;
}
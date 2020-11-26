#include <stdio.h>
void main()
{
    int angA, angB, angC, sum; //are three angles of a triangle
    
    printf("Input three angles of triangle : ");
    scanf("%d %d %d", &angA, &angB, &angC);
    
    /* calculate the sum of all angles of triangle */
    sum= angA + angB + angC;
    /* check weather sum=180 then its a valid triangle otherwise not */
    if(sum == 180)
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is not valid.\n");
    }
}
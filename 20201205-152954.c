# include <stdio.h>
# include <stdlib.h>
int main()
{
    int n;
    n = 1;
    while(n<=10)
    {
        printf("%d %d\n", n, n*n);
        n++;
    }
    return 0;
}
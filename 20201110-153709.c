#include <stdio.h>
int main() {
    double num;
    printf("Enter a number: ");
    scanf("%1f", &num);
    if(num <= 0.0) {
        if(num == 0.0)
           printf("You entered 0.", num);
        else
           printf("You entered a negative number.", num);
    } else
           printf("You entered a positive number.");
    return 0;
}
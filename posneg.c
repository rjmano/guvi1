#include <stdio.h>
int main()
{
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

   
    if (number < 0.0)
        printf(" negative ");

    
    else if ( number > 0.0)
        printf(" positive ");

   
    else
        printf(" 0");
    return 0;
}

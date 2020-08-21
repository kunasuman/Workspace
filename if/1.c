
/* Find the Greatest number between three numbers */

#include <stdio.h>

void main()
{
    int n1, n2, n3;


    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= n2) 
    {
        if (n1 >= n3)
            printf("n1 is the largest number.");
        else
            printf("n3 is the largest number.");
    } 
    else 
    {
        if (n2 >= n3)
            printf("n2 is the largest number.");
        else
            printf("n3 is the largest number.");
    }

    
}

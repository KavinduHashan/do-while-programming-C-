#include <stdio.h>
int main()
{
    int i, x, rows;

    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; ++i)
    {
        for(x=1; x<=i; ++x)
        {
            printf("* ");
        }
        printf("\n");
    }

}


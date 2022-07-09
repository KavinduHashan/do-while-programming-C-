#include <stdio.h>
int main()
{
    int no, rem=0;

    printf("Enter a number to reverse : ");
    scanf("%d", &no);

    do
    {
        rem = rem * 10;
        rem = rem + no%10;
        no = no/10;
    }
    while (no !=0);

    printf("Reverse of the number = %d\n", rem);
}


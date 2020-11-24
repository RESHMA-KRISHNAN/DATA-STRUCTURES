#include<stdio.h>
int main()
{
    int first, second, temp;
    printf("Enter the first number: ");
    scanf("%d",&first);
    printf("\nEnter the second number: ");
    scanf("%d",&second);
    temp=first;
    first=second;
    second=temp;
    printf("\nAfter Swapping-");
    printf("\nFirst number=%d",first);
    printf("\nSecond number=%d",second);
    return 0;

}
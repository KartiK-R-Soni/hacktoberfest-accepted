#include<stdio.h>
int main()
{
    int array[5];
    printf("enter the number in an array");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<=4;i++)
    {
        printf("%d  ", array[i]);
    }
    return 0;
}

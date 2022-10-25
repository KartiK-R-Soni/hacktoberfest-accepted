#include<stdio.h>
int main()
{
    int a,c,s=0;
    printf("Enter a number :- ");
    scanf("%d",&a);
    for(int b=a;b!=0;b/=10)
    {
        c=b%10;
        s=s+(c*c*c);
    }
    if(s==a)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not Armstrong");
    }
    return 0;
}
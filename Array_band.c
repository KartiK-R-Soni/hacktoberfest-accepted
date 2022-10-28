//0-10 11-20 21-30 31-40
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[]={0,0,0,0,0,0,0,0,0,0};
    int n,i,x;
    printf("Enter number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter marks:");
        scanf("%d",&x);
        if(x>=0 && x<=10)
        {
            arr[0]++;
        }
        else if(x>=11 && x<=20)
        {
            arr[1]++;
        }
        else if(x>=21 && x<=30)
        {
            arr[2]++;
        }
        else if(x>=31 && x<=40)
        {
            arr[3]++;
        }
        else if(x>=41 && x<=50)
        {
            arr[4]++;
        }
        else if(x>=51 && x<=60)
        {
            arr[5]++;
        }
        else if(x>=61 && x<=70)
        {
            arr[6]++;
        }
        else if(x>=71 && x<=80)
        {
            arr[7]++;
        }
        else if(x>=81 && x<=90)
        {
            arr[8]++;
        }
        else if(x>=91 && x<=100)
        {
            arr[9]++;
        }
    }
    printf("0-10  :%d\n",arr[0]);
    printf("11-20 :%d\n",arr[1]);
    printf("21-30 :%d\n",arr[2]);
    printf("31-40 :%d\n",arr[3]);
    printf("41-50 :%d\n",arr[4]);
    printf("51-60 :%d\n",arr[5]);
    printf("61-70 :%d\n",arr[6]);
    printf("71-80 :%d\n",arr[7]);
    printf("81-90 :%d\n",arr[8]);
    printf("91-100:%d\n",arr[9]);
}
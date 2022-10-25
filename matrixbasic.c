#include <stdio.h>
int main()
{
    int i, j;
    int matrix[5][4],asr[4],asc[5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix is \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<5;i++)
    {
        int s=0;
        for (j = 0; j < 4; j++)
        {
            s=s+matrix[i][j];
        }
        asr[i]=s;
    }
    printf("\nSum of row is");
    for(int i=0;i<5;i++)
    {
        printf("%d ",asr[i]);
    }
    for (j = 0; j < 5; j++)
    {
        int k=0;
        for(i=0;i<4;i++)
        {
            k=k+matrix[i][j];
        }  
        asc[j]=k;
    }
    printf("\nSum of column is");
    for(int i=0;i<4;i++)
    {
        printf("%d ",asc[i]);
    }
    return 0;
}
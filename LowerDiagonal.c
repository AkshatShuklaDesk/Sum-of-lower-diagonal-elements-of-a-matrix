#include<stdio.h>
int n,s=0;
int *ptrs;
void main()
{
    printf("Enter size\n");
    scanf("%d",&n);
    int ar[n][n];
    printf("Enter elements\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",ar[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=n-1;i>=1;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            printf("%d + ",ar[i][j]);
            s+=ar[i][j];
        }
    }
    ptrs=&s;
    printf("Sum = %d\n",*ptrs);
}
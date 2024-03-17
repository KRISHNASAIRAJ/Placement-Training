#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter The Order Of Matrix:");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("Enter The  values of First Matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter The  values of Second Matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //sum of matrices
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]+=b[i][j];
        }
    }
    printf("\nSum of Matrices:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
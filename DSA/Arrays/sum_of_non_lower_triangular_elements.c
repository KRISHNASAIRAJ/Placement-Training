#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter The Order of Matrix:");
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j || i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    printf("\nSum of non lower traingular matrix=%d",sum);
    return 0;
}
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
        sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=a[j][i];
        }
        printf("Sum of %d Column=%d",(i+1),sum);
        printf("\n");
    }
    return 0;
}
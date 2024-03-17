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

    // O(n^2)
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(i==j || (i+j)==(n-1))
    //         {
    //             sum+=a[i][j];
    //         }
    //     }
    // }

    // O(n)
    for(int i=0;i<n;i++)
    {
                sum+=a[i][i];
                sum+=a[i][n-i-1];
                if(n%2!=0 && i==(n/2))
                {
                    sum-=(a[n/2][n/2]);
                }
    }
    printf("Sum of Diagonal Elements:%d",sum);
    return 0;
}
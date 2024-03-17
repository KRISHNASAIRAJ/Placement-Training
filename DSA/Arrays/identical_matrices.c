#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter The Order Of First Matrix:");
    scanf("%d",&n);
    printf("Enter The Order Of Second Matrix:");
    scanf("%d",&m);
    int a[n][n],b[m][m];
    printf("Enter The  values of First Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter The  values of Second Matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(a[i][j]!=b[i][j])
                {
                    printf("Not Identical Matrices");
                    return 0;
                }
            }
        }
        printf("Identical Matrices");
    }
    else
    {
        printf("Not Identical Matrices");
    }
}
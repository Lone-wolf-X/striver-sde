#include<stdio.h>
int main()
{
    int n = 10;
    int arr[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<=i; j++)
        {
            if(j == 0 || i==j)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];    // logic
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
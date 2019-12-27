#include<stdio.h>
int main()
{
    int n;
    scanf("%d\n",&n);

    int arr[n];
    int i,j;
    for(i=0; i<n; i++)
    {
        scanf("%d ",&arr[i]);
    }

    int reversed[n];
    for(i=0,j=n-1; i<n,j>=0; i++,j--)
    {
        reversed[j]=arr[i];
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",reversed[i]);
    }

    return 0;
}

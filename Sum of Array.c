#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int  sum=0;
    for(i=0;i<n;i++)
    {
       sum=sum+A[i];
    }
    printf("%d",sum);
}
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
    int max=A[0];
    for(i=0;i<n;i++)
    {
        if(A[i]>max)
        {
            max = A[i];
        }
    }
printf("%d",max);
}
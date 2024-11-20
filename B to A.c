#include<stdio.h>
int main()
{
    int A,B,i;
    scanf("%d %d",&A,&B);
    for(i=B;i>=A;i--)
    {
        printf(" %d",i);
    }
}
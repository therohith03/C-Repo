#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d %d ",&N,&M);
    int A = N-(N*10/100);
    if(A<M)
    {
        printf("ONLINE");
    }
    else if(A>M)
    {
        printf("DINING");
    }
    else if(A==M)
    {
        printf(" EITHER");
    }
}
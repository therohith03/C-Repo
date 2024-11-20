#include<stdio.h>
int main()
{

    int X,N,M;
    scanf("%d %d %d",&X,&N,&M);
    int A=(X+M);
    if(A>=N)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
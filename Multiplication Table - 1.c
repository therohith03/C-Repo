#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1;i<=12;i++)
    {
     printf("%d x %d = %d\n",N,i,N*i);   
    }
}
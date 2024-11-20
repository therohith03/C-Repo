#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int X=a+b+(a*b);
    if(X==111)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
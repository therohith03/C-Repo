#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,x,y,z;
    scanf("%d %d",&a,&b);
    x=a*b;
    y=a+b;
    z=x-y;
    printf("%d",abs(z));
}
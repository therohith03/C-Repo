#include<stdio.h>
int main()
{
    int B1,B2,B3;
    scanf("%d %d %d",&B1,&B2,&B3);
    if(B1==1 && B2==0 && B3==0 || B1==0 && B2==1 && B3==0 || B1==0 && B2==0 && B3==1 || B1 ==0 &&B2==0 && B3== 0)
    {
        printf("Water filling time");

    }
     else
    {
        printf("Not now");
    }
}
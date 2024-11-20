#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N>=1 && N<=10)
    {
        printf("Lower Double");
    }  
    else if(N>10 && N<=15)
    {
        printf("Lower Single");
    }
    else if(N>=16 && N<=25)
{
    printf("Upper Double");
}
else if(N>25 && N<=30)
{
    printf("Upper Single");
}
}
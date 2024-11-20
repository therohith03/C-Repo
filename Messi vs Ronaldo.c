#include<stdio.h>
int main()
{
    int A,B,X,Y;
    scanf("%d%d%d%d",&A,&B,&X,&Y);
    int C=(2*A+1*B);
    int Z=(2*X+1*Y);
    if(C>Z)
    {
        printf("Messi");
    }
    else if(C<Z)
    {
        printf("Ronaldo");
    }
    else if(C=Z)
    {
        printf("Equal");

    }
}
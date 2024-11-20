#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    float pi=3.14;
    float area=r*r*pi;
    float peri=r*pi*2;
    printf("%.2f\n%.2f",area,peri);
}
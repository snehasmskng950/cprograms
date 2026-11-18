#include<stdio.h>
void swap (int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main (void)
{
    int a,b;
    printf("Ente two integers:");
    scanf("%d%d",&a,&b);
    printf("Before swapping:a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("After swappeing:a=%d,b=%d\n",a,b);
    return 0;
}
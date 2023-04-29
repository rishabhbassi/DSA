#include<stdio.h>

void multiply(int x,int m)
{
    int c;
    for(int i=1;i<=m;i++)
    {
        printf("%d X %d = %d\n",i,x,c=i*x);
    }
}

int main()
{
    int a ;

    printf("enter the number\n");
    scanf("%d",&a);
    int n=a;
    int m ;

    printf("enter the number till you want table\n");
    scanf("%d",&m);

    printf("the multiplication table of %d is ",a);
    multiply(n,m);
}
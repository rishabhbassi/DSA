#include<stdio.h>

int main()
{
    int n,a;
    
    int i,max;

    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++)
    {
        printf("enter %d elemet of array\n",i);
        scanf("%d",&arr[i]);
    }

    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("max element is %d\n",max);

    int min;
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("min element is %d",min);
}

#include <stdio.h>

int main() {
	int arr[4],i;

	for(i=0;i<3;i++)
    {
	scanf("%d ",&arr[i]);
    }

    int count=0;
    for(i=0;i<=3;i++)
    {
        if(arr[i]>=10){
            count++;
        }
    }
    printf("%d",count);
	
	
	return 0;
}

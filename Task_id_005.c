#include <stdio.h>

int main()
{
	int arr[100];
	int n,i;
	int max,min;
	max = 0;
	printf("Enter number of elements:  ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("Enter Element Number %d:  ",i);
		scanf("%d",&arr[i]);
		if(arr[i]>max){
			max = arr[i];
		}
	}
	min = arr[0];
	for(i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	
	printf("Max Number is %d\nMin Number is %d",max,min);
  return 0;
}


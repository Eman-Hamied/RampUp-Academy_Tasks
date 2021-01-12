#include <stdio.h>

int main()
{
	int arr[200];
	int i;
	int sum;
	sum=0;
	i=0;
	printf("Enter Elements to reach 100\n");
	while(sum<100){
		scanf("%d",&arr[i]);
		sum+= arr[i];
		i++;
	}
  return 0;
}


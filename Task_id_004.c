#include <stdio.h>
int reverse(int x);

int main()
{
	int x,y=0;
    printf("Enter an integer: ");
	scanf("%d",&x);
	y=reverse(x);
    printf("Reversed number = %d", y);

  return 0;
}

int reverse(int x){
	int rev = 0, remainder;
    while (x != 0) {
        remainder = x % 10;
        rev = rev * 10 + remainder;
        x /= 10;
    }
	return rev;
}
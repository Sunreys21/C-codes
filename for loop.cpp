#include <stdio.h>

int main()
{
	//for(initialization; test condition; increment)
	int i;
	int sum = 0;
	for (i=1;i<=10;i++){
		sum = sum + i;
		printf("%d\n", sum);
	}
	return 0;
}
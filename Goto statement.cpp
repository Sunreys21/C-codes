#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	goto label
	_______
	_______
	label
	statement 1;
	statement 2;
	*/
	
	int i;
	printf("Enter the value for i: ");
	scanf("%d", &i);
	if (i<0)
		goto out;
	else{
		printf("The number you entered is %d", i);
	exit(0); //exit the program (not advisable in programming
	}
	out:  
		printf("You entered a negative number!");
		
	return 0;
}
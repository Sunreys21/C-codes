#include <stdio.h>

int main()
{

	/*
	//1d array
	int s[5]={89,76,98,91,84};
	int index;
	printf("\n---Student marks details---");
	for (index = 0; index<5; index++){
		printf("\ns%d = %d", index +1, s[index]);
	}
	*/
	
	/*
	int values[5];
	printf("Enter 5 integers: ");
	
	for(int i=0; i<5;++i){
		scanf("%d", &values[i]);
	}
	
	printf("Displaying integers: ");
	
	for(int i=0; i<5; ++i){
		printf("%d\n", values[i]);
	}
	*/
	
	int marks[10], i,n, sum=0, average;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("Enter number %d: ", i+1);
		scanf(" %d", &marks[i]);
		sum+=marks[i];
	}
	
	average = sum/n;
	printf("Average = %d", average);
	
	
	return 0;
}
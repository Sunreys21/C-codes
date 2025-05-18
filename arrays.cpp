#include<stdio.h>

int main(){
	//ARRAY
	/*int A [5]={82,50,75,68,90};
	
	printf("%d", A[1]);
	
	return 0;
	*/
	
	/*
	int num[5];
	int sum, i;
	float avg;
	for (i=0;i<5;i++)
		scanf("%d", &num[i]);
		sum = 0;
	for(i=0;i<5; i++)
		sum = sum + num[i];
		avg = sum/5;
	//learn typecasting
	
	printf("The average of numbers %7.2f", avg);
	*/
	
	int i, a[10], b[10];
	for(i=0;i<10;i++){
		printf("Enter element: ");
		scanf("%d", &a[i]);
		
	}
	for(i=0;i<10;i++)
		b[i]=a[i];
	for(i=0;i<10;i++)
		printf("%d\t%d\n",a[i],b[i]);
		
}
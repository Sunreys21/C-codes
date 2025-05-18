#include <stdio.h>

int main()
{
	// C program that will input and store elements in a 2d array
	/*int disp[2][3];
	int i, j;// counter variables
	for (i=0; i<2; i++){
		for(j=0;j<3;j++){
			printf("Enter value for dis[%d][%d]:", i,j);
			scanf("%d", &disp[i][j]);
			}
		}
	printf("Two Dimensional Array Elements\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d",disp[i][j]);
			if(j==2){
				printf("\n");
			}
		}
		
	}*/
	
	//C program that will calculate the sum of all even elements and sum of all odd elements in a 2d array
	
	int i=0,j=0;
	int arr[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
	int even=0;
	int odd=0;
	
	printf("Two Dimensional array elements:\n");
		for(i=0;i<3;i++){
			for(j=0;j<4;j++){
				printf(" %d", arr[i][j]);
				if(j==3){
					printf("\n");
				}
			}
		}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(arr[i][j]%2==0)
			{
				even=even+arr[i][j];
			}
			else
			{
				odd=odd+arr[i][j];
			}
		}
	}
	
	printf("Sum of even = %d\n", even);
	printf("Sum of odd = %d\n", odd);

	return 0;
}
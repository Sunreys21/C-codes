#include <stdio.h>

int main()
{
	/*
	Do{
		body of loop
	}while(condition);
	*/
	
	/*
	int i= 1;
	do{
		printf("%d\n",i);
		i++;
		
	}while(i<= 5);
	printf("End of Program");
	*/
	
	
	char Ch;
	scanf("%c", &Ch);
	while (Ch!='N'){
		if(Ch=='Z')
			break;
			printf("%c",Ch);
			Ch=getchar();
	}

	
	/*
	int num = 1;
	while(num!=0){
		printf("Enter a number: ");
		scanf("%d",&num);
		if(num%2==0)
			continue;
		printf("\nNumber is %d\n", num);
	}
	*/
	
	return 0;
}
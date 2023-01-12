#include<stdio.h>
int main(){
	//Program to sum numbers from 1 to n.
	/* Algorithm:
	- Get n
	- Identify numbers less than n right down to  1
	- Sum up the number and retrieve the total.*/
	int i,n,sum;
	printf("Enter a value:%d",n);// Getting the value of n from the user
	scanf("&n");
	for (i=1;i<=n;i++)
	{
		printf("%d \t",i);
		scanf("&i");
}
sum=(n*(n+1))/2 ;
printf("Sum of numbers = %d \n",sum);

	return 0;
}



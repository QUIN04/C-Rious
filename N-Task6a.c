#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int m;
	int n;
	int i; 
	//int c[m];
	//printf("Enter number of cities:");
	scanf("%d",&m,&n);
	int *c = malloc(sizeof(int)* m);
//	for(int c_i=0;c_i<m;c_i++){
	//	scanf("%d",&c[c_i]);
	//}
	int min;
	int c_i;
	int max= 0;
	for(i = 0;i< n; i++){
		min= n;
		for( c_i = 0; c_i<m; c_i++){
			if (abs(c[c_i])< min){
				min = abs(c[c_i]-i);
			} 
		}
		if(min > max){
			max = min;
		}
	}
	printf("%d\n",max);
	return 0;
}

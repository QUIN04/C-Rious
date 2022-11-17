/*#include<math.h>
#include<stdio.h>
int main ()
{

int N, X;
printf("Enter a number :");
scanf("%d",&N);
printf("Enter a number :");
scanf("%d",&X);
// Code is intended to print out the number of possibilites involved in raising integer(s) to a given power, summing them to give N

return 0;
//("pause");
}
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int psum(int q, int t, int n){
	int tmp = pow(t,n);
	if(tmp == q) return 1;
	if (tmp > q) return 0;
	return psum(q,t+1,n) + psum(q-tmp,t+1,n);
}
int main(){
	int q,n;
	scanf("%d%d",&q,&n);
	printf("%d",psum(q,1,n));
	return 0;
}

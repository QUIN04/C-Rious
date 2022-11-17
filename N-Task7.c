#include<stdio.h>
char s[100];
int main()
{
	//bigger is greater
    int t,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        int l=strlen(s);
        int i=l-1;
        int f[300]={0};
        while(i>0&&s[i]<=s[i-1])
        {
            f[s[i]]++;
            i--;
        }
        if(i)
        {
            f[s[i]]++;
            f[s[i-1]]++;
            for(j=0;j<=0;j++)
            {
            	printf("The answer is: ");
            	scanf("%s",&strlen);
			}
			return 0;
		}
			
			}
			//BEAUTIFUL TRIPLETS
			#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, mid, d, i, j, k, *a, count = 0;
    
    scanf("%d %d", &n, &d);
    mid = n / 2;
    a = (int *) malloc(n * sizeof(int));
    
    //scanf("%d %d", &a[0], &a[1]);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n - 2; i++) {
        j = 1;
        while (a[j] - a[i] <= d) {
            if (a[j] - a[i] == d) {
                k = j + 1;
                while (a[k] - a[j] <= d) {
                    if (a[k] - a[j] == d) {
                        count++;
                        break;
                    }
                    k++;
                }
            }
            j++;
        }
    }
    
    printf("%d", count);
    
    return 0;
}


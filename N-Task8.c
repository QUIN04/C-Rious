#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    int n; 
    scanf("%d",&n);
    int i;
    int *c = (int *)malloc(10000000 * sizeof(int));
    int sum;
    i = -1;
    while (s[++i] != '\0')
    {
        if (i > 0 && s[i - 1] == s[i])
            sum = (s[i] - 96) + sum;
        else
            sum = s[i] - 96;
        c[sum - 1] = sum;
    }
    free(s);
    for(int a0 = 0; a0 < n; a0++){
        int x; 
        scanf("%d",&x);
        // your code goes here
        if (c[x - 1] == x)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

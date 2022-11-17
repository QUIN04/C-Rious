#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int array[101][101],height,width;

int small(int x, int y)
{
    if (x < y) return(x);
    return(y);
}

int f(int x)
{
    return(4*x+2);
}

int g(int i, int j)
{
    int term1,term2;
    if (i == 0) term1=0;
    else term1=small(array[i-1][j],array[i][j]);
    if (j == 0) term2=0;
    else term2=small(array[i][j-1],array[i][j]);
    //printf("term1=%d,term2=%d\n",term1,term2);
    return(2*(term1+term2));
}

int main() 
{
    int i,j,result; 
    scanf("%i %i", &height, &width);
    for (i = 0; i < height; ++i) 
    {
       for (j = 0; j < width; ++j) scanf("%i",&array[i][j]);
    }
    result=0;
    for (i=0;i<height;++i)
    {
        for (j=0;j<width;++j)
        {
            result+=f(array[i][j]);
            result-=g(i,j);
            //printf("%d\n",result);
        }
    }
    
    printf("%d\n", result);
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	int i,j;
    for (i=0;i<n*2;i++){
        for (j=0; j<n*2; j++) {
            if(i == 0 || j==0 ){
                printf("%d \n",n);
            }else{
                printf("%d \n",n-1);
            }
        }
    }
    return 0;
}

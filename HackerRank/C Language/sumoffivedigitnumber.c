#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int array[5];
    int sum;
    sum = n/10000;
    int a = sum;
    printf("%d\n",a);
    sum = n/1000;
    printf("%d",sum);
    return 0;
}
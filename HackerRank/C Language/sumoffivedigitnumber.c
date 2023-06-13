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
    sum = n/1000;
    sum = sum%10;
    int b= sum;
    sum = n/100;
    sum = sum%10;
    int c= sum;
    sum = n/10;
    sum = sum%10;
    int d = sum;
    sum = n;
    sum = n%10;
    int e= sum;
    printf("%d",sum=a+b+c+d+e);
    return 0;
}
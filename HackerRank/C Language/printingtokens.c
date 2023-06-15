#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d",&num);
    char arr[1000];
    int i;
    for(i =0; i<num  ; i++){
        scanf("%[^\n]",&arr[i]);    
    }
    for(i=0;i<num; i++){
        printf("%s",arr[i]);
    }
    return 0;
}
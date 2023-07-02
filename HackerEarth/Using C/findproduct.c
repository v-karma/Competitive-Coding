#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int product=1;
    int *arr;
    scanf("%d",&n);
    arr = (int *)malloc(n * sizeof(int));
    
    for (int i=0; i<n ; i++){
        scanf("%d",&arr[i]); 
    }
    for(int i= 0 ; i<n;i++){
        product *= arr[i];
    }
    printf("%d",product);
    free(arr);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d",&num);
    int arr[1000];
    int i;
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int j;
    for(j=num-1;j>=0;j--){
        printf("%d ",arr[j]);
    }   
}
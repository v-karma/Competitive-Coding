#include <stdio.h>
#include <stdlib.h>

int main() {
    int l,r,k;
    scanf("%d",&l);
    scanf("%d",&r);
    scanf("%d",&k);
    int count = 0;
    for (int i= l;i<=r;i++){
        if(i%k==0){
            count++;
        }else{
            count=count;
        }
    }printf("%d", count);
    return 0;
}

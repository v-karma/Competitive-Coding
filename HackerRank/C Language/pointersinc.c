#include <stdio.h>
#include<stdlib.h>
void update(int *a,int *b) {
    int sum;
    sum = *a +*b;
    int sub;
    sub = *a-*b;
    
    *a=sum;
    if (sub<0) {
    *b=-sub;
    }
    else {
    *b=sub;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
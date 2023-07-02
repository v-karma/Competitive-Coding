#include <stdio.h> 
#include <string.h> 
int main()
{
    char a[100];     
    scanf("%s",a);          
    for(int i=0;i<101;i++){         
        if(a[i]>=65 && a[i]<=90){
            a[i]=a[i]+32;
            printf("%c",a[i]);
        }else{
            a[i]=a[i]-32;
            printf("%c",a[i]);         
            }     
    }     
}
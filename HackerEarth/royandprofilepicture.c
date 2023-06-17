#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    int **arr;
    int l;

    scanf("%d", &l);
    scanf("%d",&n);
    arr = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        arr[i] = (int *)malloc(n * sizeof(int));
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            if(arr[i][0] < l || arr[i][1] <l){
                printf("UPLOAD ANOTHER\n");
                break;
                }
            }else if( arr[i][0]>l || arr[i][1]>l){
                if(arr[i][0]==arr[i][1]){
                    printf("ACCEPTED\n");
                    break;
                }else{
                    printf("CROP IT\n") ;
                    break;
                }  
            }else if(arr[i][0]==arr[i][1]){
                printf("ACCEPTED\n");
                break;
            }else{
                printf("ACCEPTED");
                break;
            }
                
            }              
        }
        printf("\n");

    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}

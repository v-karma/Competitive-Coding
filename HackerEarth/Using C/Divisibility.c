
#include <stdio.h>

int main(){
	int N ;
	scanf("%d", &N);
	int arr[1000];
	for(int i=0; i<N; i++){
	    scanf("%d", arr[i]);
	}
	for (int i=0;i<N;i++){
		if(arr[i]%10 == 0){
			printf("Yes");
		}
		else{
			printf("No");
		}
	}
    return 0;
}
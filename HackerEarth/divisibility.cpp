#include <iostream>
#include<vector>
using namespace std;
int main() {
	int num;
	cin >> num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
        if(arr[i] >=1 && arr[i]<=9){
            arr[i]=arr[i];
        }
        else{
            arr[i]= arr[i]%10;
        }
	}
	int sum{0};
    if(arr[num] != 0){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
}
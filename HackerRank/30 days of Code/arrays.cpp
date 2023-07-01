#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[1000];
    for (int i=0; i<num;i++){
        cin>>arr[i];
    }
    for(int i = num-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
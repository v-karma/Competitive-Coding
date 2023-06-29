#include<iostream>
int main(){
    int num[30];
    for(int i= 0;i<sizeof(num);i++){
        std::cin>>num[i];
    for(int i =0; i<sizeof(num); i++){
        for(int j =0; j<sizeof(num);j++){
            if(num[i]!=num[j]){
                std::cout<<num[i];        
        }
        

        }
    }
    return 0;
}

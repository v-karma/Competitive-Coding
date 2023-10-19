#include <iostream>
#include<vector>
using namespace std;
int main(){
        int testcases;
        cin>>testcases;
        for(int i=0;i<testcases;i++){
        int num1,num2,remainder1,remainder2 ;
        cin>>num1>>num2;
        int reversed1{0},reversed2{0};

        while(num1 != 0){
            remainder1 = num1%10;
            reversed1 = reversed1 *10 + remainder1;
            num1 =  num1/10;
        }
        while(num2 != 0){
            remainder2 = num2%10;
            reversed2 = reversed2 * 10 + remainder2;
            num2 = num2/10;
        }
        int newnum= reversed1 + reversed2;
        int remaindernew{0},reversednew{0};
        while(newnum!= 0){
            remaindernew = newnum%10;
            reversednew= reversednew * 10 + remaindernew;
            newnum = newnum/10;
        }
        cout<<reversed1<<" "<<reversed2<<endl;

        cout<<reversednew<<endl;
        }
}
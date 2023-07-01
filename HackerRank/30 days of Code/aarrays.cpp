#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
#include <string.h>
#include<cstring>
using namespace std;


int main() {
    int testcase{};
    cin>>testcase;
    for(int i=0;i<testcase;i++){
        string var{};
        cin>>var;
        string evenchar{}, oddchar{};
        for(int j=0;j<var.length();j++){
            if(j%2==0){
                evenchar+=var[j];
            }else{
                oddchar+=var[j];
            }
        }
    cout<<evenchar<<" "<<oddchar<<endl;
    }

    return 0;
}

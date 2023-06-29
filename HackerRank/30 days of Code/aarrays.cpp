#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    int n{};
    cin>>n;
    char num[n];
    for (int i=0;i<sizeof(num);i++){
        getline(cin,&num[i]);
    }
    cout<<num;
    return 0;
}
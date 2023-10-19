#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    for(int i=0;i<testcases;i++){
    string c;
    cin>>c;
    string s="";
    for(int i=0;i<c.length();i++){
        if(isupper(c[i] && !isdigit(c[i]))){
            s +="_";
            s += tolower(c[i]);
        }
        else{
            s+=c[i];
        }

    }
    cout<<s<<endl;
    }
} 
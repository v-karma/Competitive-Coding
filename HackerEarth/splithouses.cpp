#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i] != 'H'){
            s[i]= 'B';
        }
    }
    bool val=false;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'B'){
            val=true;
        }
        else if(s[i]=='H' && s[i+1]=='H'){
            val=false;
        }
    }
    if(val){
        cout<<"YES"<<endl;
        cout<<s;
    }
    else{
        cout<<"No";
    }
}
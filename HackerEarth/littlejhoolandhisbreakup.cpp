#include<bits/stdc++.h>
using namespace std;

 

int main()
{     
    string s, sample = "love";        
    cin >> s;    
    int j = 0;   
     
    for(int i = 0 ; i < s.length() ; i++)
        if(s[i] == sample[j])
            j++;    
 
    cout<<j<<endl;
    if(j == 4)
        cout << "I love you, too!";    
    else
        cout << "Let us breakup!";
 
    return 0;
}
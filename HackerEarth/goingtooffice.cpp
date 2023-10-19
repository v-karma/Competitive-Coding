#include <iostream>
#include<vector>
using namespace std;
int main(){
    int d;
    cin>>d;
    int ot_c,ot_f,ot_d;
    cin>>ot_c>>ot_f>>ot_d; 
    int ct_s,ct_b,ct_m,ct_d;
    cin>>ct_s>>ct_b>>ct_m>>ct_d;

    int ot_total,ct_total;

    ot_total = ot_c +(d-ot_f)*ot_d;
    ct_total= ct_b +(d/ct_s)*ct_m + d * ct_d;

    cout<<ot_total<<endl;
    cout<<ct_total<<endl;
    if(ot_total<=ct_total){
        
        cout<<"Online Taxi";
    } 
    else{
        
        cout<<"Classic Taxi";
    }
}   
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        if(a<b){
            cout<<"Second"<<endl;
        }if(b<a){
            cout<<"First"<<endl;
        }if(a==b){
            if(sum%2==0){
                cout<<"Second"<<endl;
            }else{
                cout<<"First"<<endl;
            }
        }
    }
    
}
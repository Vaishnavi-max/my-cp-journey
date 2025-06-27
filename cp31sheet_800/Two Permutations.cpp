#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n,a,b;
        cin>>n>>a>>b;
        if(((n==a) && (n==b)) || a+b+2<=n){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    
}
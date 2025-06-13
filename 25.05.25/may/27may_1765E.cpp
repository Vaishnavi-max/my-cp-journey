#include <iostream>
#include <bits/stdc++.h>  
using namespace std;
int calc(int n,int a,int b){
    
        if(a<=b){
            return (n+a-1)/a ;
        }
        else{
            int q=0;
            int silvercoins=0;
            while(silvercoins<b && silvercoins<n){ //sell condn
                silvercoins+=a;
                q++;
            }
            while (silvercoins>b && silvercoins<n)
            {
                silvercoins-=b;
                silvercoins+=a;
            }
            return q;
        }
    
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,a,b;
        cin>>n>>a>>b;
        int quest=calc(n,a,b);
        cout<<quest<<endl;
        t--;
    }
    
}
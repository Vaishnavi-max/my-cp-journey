#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t>0) {
        int n;
        cin >>n;
        vector<int>p;
        vector<int>q;
        vector<int>r;
        if(n>0){
            for(int i=0;i<n;i++){
                int elem;
                cin>>elem;
                p.push_back(elem);
            }
            //cout<<endl;
            for(int i=0;i<n;i++){
                int elem;
                cin>>elem;
                q.push_back(elem);
            }
            //cout<<endl;
            long long mod=998244353;
            for(int i=0;i<n;i++){
                long long ans=p[i];
                for(int j=0;j<=i;j++){
                    long long sum=pow(2,p[j])+pow(2,q[i-j]);
                    long long newsum=sum%mod;
                    ans=max(ans,newsum);
                    
                }
                r.push_back(ans);
            }
            for(int k=0;k<n;k++){
                cout<<r[k]<<" ";
            }

        }
        
        
        cout<<endl;
        t--;
    }
    return 0;
}
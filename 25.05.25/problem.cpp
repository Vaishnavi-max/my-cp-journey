#include <iostream>
#include <vector>
#include <utility>
#include <bits/stdc++.h>  
using namespace std;
long long solve(int arr[],int n,int x){
    long long maxsum=0;
    for(int i=0;i<n;i++){
        maxsum += ceil((double)arr[i]/x);  
    }
    return maxsum;
}

int main(){
    int t,n,x;
    cin>>t;
    vector<pair<long long,long long>>ans;
    while(t>0){
        cin>>n>>x;
        int arr[n];
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        long long minb = ceil((double)sum/x);  
        long long maxb;
        maxb=solve(arr,n,x);
        ans.push_back({minb, maxb});
        t--;
    }
    for(auto it:ans){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
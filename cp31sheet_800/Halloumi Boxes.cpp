#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n,k; 
        cin >> n>>k;

        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<long long>cpy=arr;
        sort(cpy.begin(),cpy.end());
        if(cpy==arr||k>1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

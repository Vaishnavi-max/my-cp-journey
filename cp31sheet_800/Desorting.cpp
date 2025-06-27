#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; 
        cin >> n;

        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<long long>cpy=arr;
        sort(cpy.begin(),cpy.end());
        if(cpy!=arr){
            cout<<0<<endl;
            continue;
        }else{
            vector<long long>mingap(n-1);
            for(int i=0;i<n-1;i++){
                mingap[i]=arr[i+1]-arr[i];
            }
            int ming=*min_element(mingap.begin(),mingap.end());
            cout<<(ming/2)+1<<endl;
        }
    }
    return 0;
}

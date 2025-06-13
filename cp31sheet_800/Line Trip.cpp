#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n,x; 
        cin >> n>>x;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mindist=arr[0];
        for(int i=0;i<n-1;i++){
            int dist=arr[i+1]-arr[i];
            if(dist>mindist){
                mindist=dist;
            }
        }
        int lastgasstn=arr[n-1];
        int lastdist=2*(x-lastgasstn);
        if(lastdist>mindist){
            mindist=lastdist;
        }
        cout<<mindist<<endl;
    }
    return 0;
}
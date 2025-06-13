#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        //my approach
        // if(n==2){
        //     if(a[0]%2==0 && a[1]%2==1||a[0]%2==1 && a[1]%2==0){
        //         cout<<"No"<<endl;
        //     }else{
        //         cout<<"Yes"<<endl;
        //     }
        //     continue;
        // }
        // vector<int>odd,even;
        // for (int i = 0; i < n; i++) {
        //     if(a[i]%2==0){
        //         even.push_back(a[i]);
        //     }else{
        //         odd.push_back(a[i]);
        //     }
        // }
        // int evensum=0,oddsum=0;
        // for(int it:even){
        //     evensum+=it;
        // }
        // for(int it:odd){
        //     oddsum+=it;
        // }
        // if((evensum%2==0) && (oddsum%2==0)){
        //     cout<<"Yes"<<endl;
        // }else{
        //     cout<<"No"<<endl;
        // }
        int cnt_odd=0;
        for(int it:a){
            if(it%2!=0){
                cnt_odd++;
            }
        }
        if(cnt_odd%2==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        
    }
}
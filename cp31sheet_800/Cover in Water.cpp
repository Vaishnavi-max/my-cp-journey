#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        string s;
        cin >> s;  // FIX: Read the whole string at once
        bool cont_3_empty_cells=false;
        int cnt_empty_cells=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.' && i<n && s[i+1]=='.' && i+1<n && s[i+2]=='.' && i+2<n){
                cont_3_empty_cells=true;
                break;
            }if(s[i]=='.'){
                cnt_empty_cells++;
            }
        }
        if(cont_3_empty_cells){
            cout<<2<<endl;
        }else{
            cout<<cnt_empty_cells<<endl;
        }
    }
    return 0;
}
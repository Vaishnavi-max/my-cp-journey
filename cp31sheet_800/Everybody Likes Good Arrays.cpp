#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        int cnt = 0;
        for(int i=0;i<n-1;i++){
            if(arr[i]%2==arr[i+1]%2){
                cnt++;
            }
        }

        cout << cnt << endl;
    }
}

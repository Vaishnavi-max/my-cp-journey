#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; 
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long total_twos = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 2) {
                total_twos++;
            }
        }

        long long current_twos = 0;
        bool found = false;
        for(int i = 0; i < n - 1; i++) { // Only till n-1 to satisfy 1 ≤ k ≤ n−1
            if(arr[i] == 2) {
                current_twos++;
            }
            if(current_twos == total_twos - current_twos) {
                cout << i + 1 << endl; // k is i+1
                found = true;
                break;
            }
        }

        if(!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}


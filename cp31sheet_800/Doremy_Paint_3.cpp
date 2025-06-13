#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        map<long long, long long> freq;
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
            if (freq.size() > 2) {
                break;
            }
        }

        if (freq.size() > 2) {
            cout << "No" << endl;
            continue;
        }

        if (freq.size() == 1) {
            cout << "Yes" << endl;
            continue;
        }

        long long freq1 = freq.begin()->second;
        long long freq2 = freq.rbegin()->second;

        if (n % 2 == 0) {
            if (freq1 == freq2) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        } else {
            if (abs(freq1 - freq2) == 1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int q;
        cin >> q;  // Number of incoming elements
        vector<int> a;  // Array we will build
        string ans;     // To store 1s and 0s
        bool rotated = false; // Have we wrapped already?
        int first = -1;       // First element in the array

        for (int i = 0; i < q; ++i) {
            int x;
            cin >> x;  // Read the new element
            if (a.empty()) {
                // First element, always accept
                a.push_back(x);
                first = x;
                ans += '1';
            } else if (!rotated) {
                // Still growing in sorted order
                if (x >= a.back()) {
                    // x is greater than or equal to the last element
                    a.push_back(x);
                    ans += '1';
                } else if (x <= first) {
                    // Drop happened, but x is less than or equal to start,
                    // so start the "rotated" section
                    a.push_back(x);
                    ans += '1';
                    rotated = true;  // We've now "wrapped around"
                } else {
                    // Not allowed
                    ans += '0';
                }
            } else {
                // Already rotated: now only allow x if
                // it's >= last and ≤ first
                if (x >= a.back() && x <= first) {
                    a.push_back(x);
                    ans += '1';
                } else {
                    ans += '0';
                }
            }
        }

        cout << ans << '\n';  // Output result for this test case
    }
    return 0;
}

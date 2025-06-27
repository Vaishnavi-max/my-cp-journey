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

        bool allEqual = true;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] != arr[i + 1]) {
                allEqual = false;
                break;
            }
        }

        if (allEqual) {
            cout << "No" << endl;
            continue;
        }

        sort(arr.rbegin(), arr.rend()); // Try descending order first

        // Ensure no prefix sum equals next element
        int prefixSum = arr[0];
        bool is_valid = true;
        for (int i = 1; i < n; i++) {
            if (arr[i] == prefixSum) {
                // swap with last safe element
                if (i != n - 1) {
                    swap(arr[i], arr[n - 1]);
                } else {
                    is_valid = false;
                    break;
                }
            }
            prefixSum += arr[i];
        }

        // Final safety check
        prefixSum = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] == prefixSum) {
                is_valid = false;
                break;
            }
            prefixSum += arr[i];
        }

        if (!is_valid) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
            for (int it : arr)
                cout << it << " ";
            cout << endl;
        }
    }

    return 0;
}


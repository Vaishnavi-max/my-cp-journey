#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n); // Initialize vector with size n
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == k) {
                found = true;
                break; // No need to check further
            }
        }
        if (found) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
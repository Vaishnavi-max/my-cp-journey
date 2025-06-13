#include <bits/stdc++.h>
using namespace std;

void maxsum(int n, vector<long long>& arr, vector<long long>& ans) {
    vector<long long> prefixsum(n + 2, 0); 
    for (int i = n; i >= 1; i--) {
        prefixsum[i] = prefixsum[i + 1] + arr[i];
    }

    vector<long long> prefixMax(n + 1);
    prefixMax[1] = arr[1];
    for (int i = 2; i <= n; i++) {
        prefixMax[i] = max(prefixMax[i - 1], arr[i]);
    }

    for (int length = 1; length <= n; length++) {
        if (length == 1) {
            ans.push_back(prefixMax[n]);
        } else if (length == n) {
            ans.push_back(prefixsum[1]);
        } else {
            long long suffix = prefixsum[n - length + 2];
            long long best = suffix + prefixMax[n - (length - 1)];
            ans.push_back(best);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<long long> arr(n + 1);
        for (int i = 1; i <= n; i++) cin >> arr[i];

        vector<long long> ans;
        maxsum(n, arr, ans);

        for (auto &x : ans) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}

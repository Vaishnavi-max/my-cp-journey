#include <bits/stdc++.h>
using namespace std;

int findmaxtime(long long n, char c, string &temp) {
    vector<int> greenIndexes;
    long long size = 2 * n;

    // Store all positions of 'g' in the doubled string
    for (long long i = 0; i < size; i++) {
        if (temp[i] == 'g') {
            greenIndexes.push_back(i);
        }
    }

    long long time = 0;
    for (long long i = 0; i < n; i++) {
        if (temp[i] == c) {
            auto it = lower_bound(greenIndexes.begin(), greenIndexes.end(), i);
            if (it != greenIndexes.end()) {
                time = max(time, *it - i);
            }
        }
    }

    return time;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        char c;
        cin >> n >> c;
        string str;
        cin >> str;

        if (c == 'g') {
            cout << 0 << endl;
        } else {
            string temp = str + str; 
            long long maxtime = findmaxtime(n, c, temp);
            cout << maxtime << endl;
        }
    }
}

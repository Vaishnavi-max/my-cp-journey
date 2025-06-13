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
        int max_a = *max_element(a.begin(), a.end());
        vector<int> b, c;
        for (int num : a) {
            if (num == max_a) {
                c.push_back(num);
            } else {
                b.push_back(num);
            }
        }
        if (b.empty()||c.empty()) {
            cout << -1 << endl;
            continue;
        }
        else {
            cout << b.size() << " " << c.size() << endl;
            for (int num : b) {
                cout << num << " ";
            }
            cout << endl;
            for (int num : c) {
                cout << num << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
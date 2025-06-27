#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int left = 0, right = n - 1;
        int length = n;

        while (left < right) {
            if ((s[left] == '0' && s[right] == '1') || (s[left] == '1' && s[right] == '0')) {
                
                length -= 2;
                left++;
                right--;
            } else {
                break;      
            }
        }

        cout << length << endl;
    }

    return 0;
}

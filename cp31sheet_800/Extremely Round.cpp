#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s = to_string(n);
        int len = s.length();
        int lead_digit = s[0] - '0';

        // Formula: 9*(digits - 1) + leading digit
        int ans = 9 * (len - 1) + lead_digit;
        cout << ans << endl;
    }
    return 0;
}
  
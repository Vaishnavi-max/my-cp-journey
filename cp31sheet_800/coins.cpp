#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        if (n % 2 == 0) {
            // n is even: always possible with 2-burle coins
            cout << "YES" << endl;
        } else {
            // n is odd: check if k is odd and n >= k
            if (k % 2 == 1 && n >= k) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
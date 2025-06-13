#include <iostream>
#include <vector>
#include <climits>  // For INT_MAX
#include <cmath>    // For abs()
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    bool found_zero = false;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            found_zero = true;
        }
    }

    if (found_zero) {
        cout << 0 << endl;
        return 0;
    }

    int min_abs = INT_MAX;
    for (int i = 0; i < n; i++) {
        int current_abs = abs(arr[i]);
        if (current_abs < min_abs) {
            min_abs = current_abs;
        }
    }

    cout << min_abs << endl;
    return 0;
}
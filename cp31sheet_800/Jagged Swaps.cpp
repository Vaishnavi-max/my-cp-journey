#include <bits/stdc++.h>
using namespace std;
// bool isswap(vector<int>& arr, int n) {
//     vector<int> temp = arr;
//     sort(temp.begin() + 1, temp.begin() + n + 1);  
//     vector<int> rev = temp;
//     reverse(rev.begin() + 1, rev.begin() + n + 1);

 
//     bool isinc = true;
//     for (int i = 1; i <= n; i++) {
//         if (arr[i] != temp[i]) {
//             isinc = false;
//             break;
//         }
//     }
//     if (isinc) {
//         return true;
//     }

//     bool isdec = true;
//     for (int i = 1; i <= n; i++) {
//         if (arr[i] != rev[i]) {
//             isdec = false;
//             break;
//         }
//     }
//     if (isdec) {
//         return false;
//     }

//     int length = n - 2;
//     for (int i = 1; i <= length; i++) {
//         for (int j = 2; j <= n - 1; j++) {
//             if (arr[j] > arr[j - 1] && arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }

//     // Check again
//     isinc = true;
//     for (int i = 1; i <= n; i++) {
//         if (arr[i] != temp[i]) {
//             isinc = false;
//             break;
//         }
//     }
//     if (isinc) {
//         return true;
//     }

//     return false;
// }
int main() {
    int t; cin >> t;
    while (t--) {
        int n; 
        cin >> n;

        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        if (arr[1]==1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}

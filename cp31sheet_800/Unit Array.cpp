#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        int cnt_one = 0, cnt_negone = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 1) {
                cnt_one++;
            } else {
                cnt_negone++;
            }
        }
        int moves=0;
        while (cnt_negone>cnt_one||cnt_negone%2!=0)
        {
            /* code */
            cnt_one++;
            cnt_negone--;
            moves++;
        }
        cout<<moves<<endl;
    }
    return 0;
}
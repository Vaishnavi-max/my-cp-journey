#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n ;
        vector<int> arr(n-1); // Initialize vector with size n
        for (int i = 0; i < n-1; i++) {
            cin >> arr[i];
        }
        int sum=0;
        for (int i = 0; i < n-1; i++) {
            sum+=arr[i];
        }
        cout<<(0-sum)<<endl;
    }
    return 0;
}
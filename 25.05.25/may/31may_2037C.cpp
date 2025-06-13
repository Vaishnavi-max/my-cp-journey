#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

vector<int> construct_permutation(int n) {
    if (n == 2 || n == 3) return {};
    
    vector<int> evens, odds;
    for (int i = 2; i <= n; i += 2) evens.push_back(i);
    for (int i = 1; i <= n; i += 2) odds.push_back(i);
    
    vector<int> perm = evens;
    perm.insert(perm.end(), odds.begin(), odds.end());
    
    // Check the transition between evens and odds
    if (!evens.empty() && !odds.empty()) {
        int last_even = evens.back();
        int first_odd = odds.front();
        if (is_prime(last_even + first_odd)) {
            int oz=odds.size();
            for(int i=1;i<oz;i++){
                int odd_val=odds[i];
                if(!is_prime(last_even+odd_val)){
                    swap(perm[evens.size()],perm[evens.size()+i]);
                    return perm;
                }
            }
            
                
            // If no swap works, return empty
            return {};
        }
    }
    
    return perm;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> perm = construct_permutation(n);
        if (perm.empty()) {
            cout << "-1\n";
        } else {
            for (int num : perm) {
                cout << num << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool iscomposite(int n){
//     if(n==2){
//         return false;
//     }
//     for(int i=2;pow(i,2)<=n;i++){
//         if(n%i==0){
//             return true;
//         }
//     }
//     return false;
// }
// bool check_permutation(vector<int>&arr,int n){
//     if(n==2||n==3){
//         return false;
//     }
//     vector<int>temp;
//     int i;
//     for(i=2;i<=n;i=i+2){
//         temp.push_back(i);
//     }
//     i=i-2;
//     for(int j=1;j<=n;j=j+2){
//         if(iscomposite(i+j)){
//             temp.push_back(j);
//         }
//     }
//     for(int k=1;k<=n;k=k+2){
//         if(find(temp.begin(),temp.end(),k)==temp.end()){
//             temp.push_back(k);
//         }
//     }
//     for(int i=0;i<n-1;i++){
//         int sum=temp[i]+temp[i+1];
//         if(!iscomposite(sum)){
//             return false;
//         }
//         arr[i]=temp[i];
//     }
//     arr[n-1]=temp[n-1];
//     return true;
// }
// int main(){
//     long long t;
//     cin>>t;
//     while(t>0){
//         long long n;
//         cin>>n;
//         vector<int>arr;
//         for(int i=1;i<=n;i++){
//             arr.push_back(i);
//         }
//         if(check_permutation(arr,n)){
//             for(int i=0;i<n;i++){
//                 cout<<arr[i]<<" ";
//             }
//         }else{
//             cout<<-1;
//         }
//         cout<<endl;
//         t--;
//     }
// }
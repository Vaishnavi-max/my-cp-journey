
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a==b){
        return a;
    }
    while(b>0){
        if(b>a){
        b%=a;
        }
        else{
            swap(a,b);
        }
    }
    return a;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector <int> a(n);
	    for(int i=0;i<n;i++){
	        cin >>a[i];
	    }
	    int flag=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(i==j)continue;
	            else if(gcd(a[i],a[j])<=2){
	                flag=1;
	                break;
	            }
	        }
	    }
	    if(flag==0){
	        cout << "No" << endl;
	    }
	    else{
	        cout << "Yes" << endl;
	    }
	}
}
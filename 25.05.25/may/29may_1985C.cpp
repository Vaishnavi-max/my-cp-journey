#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
bool good(vector<int>&arr,long long sum,int max_element){
    // long long n=arr.size();
    // if(n==1){
    //     return arr[0]==0;
    // }
    // else if(n==2){
    //     return arr[0]==arr[1];
    // }

    // else{
    //     long long last_index=arr.size()-1;
        if(max_element==sum-max_element ){
            return true;
        }
        return false;
    //}
}
int main(){
    long long t;
    cin>>t;
    while(t>0){
        int cnt=0;
        long long n;
        cin>>n;
        vector<int>arr;
        long long sum=0;
        int max_element=0;
        for(int i=0;i<n;i++){
            int elem;
            cin>>elem;
            sum+=elem;
            arr.push_back(elem);
            if(elem>max_element){
                max_element=elem;
            }
            if(good(arr,sum,max_element)){
                cnt++;
            }
        }
        cout<<cnt<<endl;
        t--;
    }
}
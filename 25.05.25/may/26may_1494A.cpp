#include <iostream>
#include <vector>
#include <utility>
#include <bits/stdc++.h>  
using namespace std;
bool isvalidparenthesis(string &pstr){
    stack<char>st;
    for(auto it:pstr){
        if(it=='('){
            st.push(it);
        }else{
            if(st.empty()){
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}
bool canformregularbracket(string &str){
    int n=str.size();
    vector<unordered_map<char,int>>mpp={
        {{'A','('},{'B','('},{'C','('}},
        {{'A','('},{'B','('},{'C',')'}},
        {{'A','('},{'B',')'},{'C','('}},
        {{'A','('},{'B',')'},{'C',')'}},
        {{'A',')'},{'B','('},{'C','('}},
        {{'A',')'},{'B','('},{'C',')'}},
        {{'A',')'},{'B',')'},{'C','('}},
        {{'A',')'},{'B',')'},{'C',')'}}
    };
    for(auto it:mpp){
        string pstr;
        for(char c:str){
            pstr+=it.at(c);
        }
        if(isvalidparenthesis(pstr)){
            return true;
        }
        
    }
    return false;
    


}

int main(){
    int t;
    cin>>t;
    while(t>0){
        string str;
        cin>>str;
        bool check=canformregularbracket(str);
        if(check){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        t--;
    }
    
}
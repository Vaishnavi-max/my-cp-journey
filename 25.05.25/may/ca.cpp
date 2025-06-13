#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool findwin(int &a,int &b,int &c,int &d){
    //bool flag=true;
    int round=1;
    if(d==0 || b==0){
        return true;
    }
    if(c==0 || a==0){
        return false;
    }
    while (a>0 && b>0 && c>0 && d>0)
    {
        /* code */
        if(round%2!=0){
            if(a>0 && c>0){
                d--;
                b--;
                if(d==0 || b==0){
                    return true;
                }
            
            }
        }else{
            if(d>0 && b>0){
                c--;
                a--;
                if(c==0 || a==0){
                    //flag=false;
                    return false;

                }
            }
        }
        round++;
    }
    return c>=d;

}
int main() {
    int t;
    cin >> t;
    while (t>0) {
        int a,b,c,d;
        cin >> a>>b>>c>>d;
        if(findwin(a,b,c,d)){
        //if(c>=d){
            cout<<"Gellyfish"<<endl;
        }
        else{
            cout<<"Flower"<<endl;
        }
        t--;
    }
    //return 0;
}
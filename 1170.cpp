#include<iostream>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        float a;
        cin>>a;
        c=0;
        while(a>1){
            a/=2;
            c++;
        }
        cout<<c<<" dias"<<endl;

    }
    return 0;
}
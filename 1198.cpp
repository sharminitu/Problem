#include<iostream>
using namespace std;
int main(){
    long long int a,b;
    while (cin>>a>>b){
        if(a>b){
            long long int temp = a;
            a=b;
            b= temp;
        }
        long long int diff = b-a;

        cout<<diff<<endl;    
    }
    return 0;
    
}
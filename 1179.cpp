#include<iostream>
using namespace std;
int main(){
    int a[5];
    int b[5];

    int x;
    for(int i=0;i<=15;i++){
        cin>>x;
    }
    for(int j=0;j<5;j++){
        if(x%2==0){
            cout<<"par["<<j<<"] = "<<x<<endl;
        }  
    }
    for(int k =0;k<5;k++){
        if(x%2!=0){
            cout << "impar[" << k << "] = " << x << endl;
        }
    }
}
#include<iostream>
using namespace std;
int main(){
    int L,C,R1,R2;
    while(1){
        
    cin>>L>>C>>R1>>R2;
    if (L == 0 && C == 0 && R1 == 0 && R2 == 0)
    {
        break;
    }
    if(L<C){
        int temp = L;
        L=C;
        C=temp;
    }
    int A = 2*R1;
    int B= 2*R2;
    int AB = A+B;
    if(L>AB){
        cout<<"S"<<endl;
    }
    else{
        cout<<"N"<<endl;
    }
    }
}
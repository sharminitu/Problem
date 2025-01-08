#include<iostream>
using namespace std;
int main(){
    long long int a,b;
    
    while(cin>>a>>b){

        long long int f1 = 1, f2 = 1, f, i, j;

        for (i = 1; i <= a; i++)
        {
            f1 *= i;
    }
    for (j = 1; j <= b; j++)
    {
        f2 *= j;
    }
    f = f1 + f2;
    cout<<f<<endl;
    }
    return 0;
}
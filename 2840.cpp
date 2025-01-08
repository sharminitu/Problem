#include<iostream>
using namespace std;
int main(){
    int R,gas;

    cin>>R>>gas;
    float area = (4/3.0)*3.1415*R*R*R;
    
    int n = (int)gas/area;
    cout<<n<<endl;

    return 0;
}
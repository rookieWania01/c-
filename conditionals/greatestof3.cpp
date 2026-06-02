#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout << "enter x,y,z: ";
    cin >> x>>y>>z;
    if(x>y){
        if(x>z) cout<<"x is greatest";
        else cout << "z is greatest";
    }
    else if(y>z) cout << "y is greatest";
    else cout << "z is greatest";
    
}
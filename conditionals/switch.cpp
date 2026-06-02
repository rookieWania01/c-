#include<iostream>
using namespace std;
int main(){
    int x,y;
    char z;
    cout << "enter x,y,z: ";
    cin >> x>>y>>z;
    switch (z)
    {
        case '+':
        cout << x+y;
        break;
        case '-':
        cout << x-y;
        break;
        case '*':
        cout << x*y;
        break;
        case '/':
        cout << x/y;
        break;
    
    default:
    cout << "invalid";
        break;
    }
}
#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "enter x: ";
    cin >> x;
    if(x%5==0 || x%3==0) cout << "x is divisbile by 5 or 3";
    else cout << "not div by 5 or 3";
}
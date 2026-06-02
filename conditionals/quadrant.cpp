#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout << "enter x,y: ";
    cin >> x>>y;
    if(x>0 && y>0) cout << "1st";
    else if(x<0 && y<0) cout << "3rd";
    else if(x==0 && y==0) cout << "origin";
    else if(x>0 && y<0) cout << "4th";
    else cout << "2nd";
}
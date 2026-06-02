#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout << "enter cp and sp: ";
    cin >> cp >> sp;
    if(cp>sp) cout << "loss" << "profit is:\n " << sp - cp;
    else if (sp == cp) cout << "no profit no loss";
    else cout << "profit";
}
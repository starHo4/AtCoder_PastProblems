#include <iostream>
using namespace std;
int main(){
    int A, B;
    string op;
    cin >> A >> op >> B;
    int out;
    if(op == "+"){
        out = A + B;
    }
    if(op == "-"){
        out = A - B;
    }
    cout << out << endl;
}
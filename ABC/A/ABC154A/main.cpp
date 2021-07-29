#include <iostream>
using namespace std;
int main(){
    string S, T;
    int A, B;
    string U;
    cin >> S >> T >> A >> B >> U;
    if(U == S){
        A--;
    }
    if(U == T){
        B--;
    }
    cout << A << " " << B << endl;
}
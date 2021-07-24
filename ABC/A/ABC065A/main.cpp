#include <iostream>
using namespace std;
int main(){
    int X, A, B;
    cin >> X >> A >> B;
    if(A >= B){
        cout << "delicious" << endl;
    } else {
        if(B - A > X){
            cout << "dangerous" << endl;
        } else {
            cout << "safe" << endl;
        }
    }
}
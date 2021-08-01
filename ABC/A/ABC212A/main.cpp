#include <iostream>
using namespace std;
int main(){
    int A, B;
    cin >> A >> B;
    if(A > 0 && B == 0){
        cout << "Gold" << endl;
    }
    if(A == 0 && B > 0){
        cout << "Silver" << endl;
    }
    if(A > 0 && B > 0){
        cout << "Alloy" << endl;
    }
}
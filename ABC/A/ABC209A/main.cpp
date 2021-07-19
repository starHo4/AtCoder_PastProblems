#include <iostream>
using namespace std;
int main(){
    int A, B;
    cin >> A >> B;
    int out = 0;
    if(A <= B){
        out = B - A + 1;
    }
    cout << out << endl;
}
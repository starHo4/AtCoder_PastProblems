#include <iostream>
using namespace std;
int main(){
    int A, B;
    cin >> A >> B;
    if(A <= 2 * B){
        cout << 0 << endl;
        return 0;
    }
    cout << A - 2 * B << endl;
}
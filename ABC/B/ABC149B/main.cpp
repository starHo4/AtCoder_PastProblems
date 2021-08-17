#include <iostream>
using namespace std;
typedef long long ll;
int main(){
    ll A, B, K;
    cin >> A >> B >> K;
    if(A >= K){
        A -= K;
    } else {
        K -= A;
        A = 0;
        if(B >= K){
            B -= K;
        } else {
            B = 0;
        }
    }
    cout << A << " " << B << endl;
}
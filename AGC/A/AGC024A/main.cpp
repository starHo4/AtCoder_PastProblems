#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main(){
    ll A, B, C, K;
    cin >> A >> B >> C >> K;
    if(K % 2 == 0){
        cout << A - B << endl;
    } else {
        cout << -A + B << endl;
    }
}
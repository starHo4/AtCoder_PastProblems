#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
ll A, B, X;
ll check(ll x){
    ll dx = to_string(x).length();
    return A * x + B * dx;
}
int main(){
    cin >> A >> B >> X;
    ll ok = 0, ng = pow(10, 9) + 1;
    while(ok + 1 != ng){
        ll m = (ok + ng) / 2;
        if(check(m) <= X){
            ok = m;
        } else {
            ng = m;
        }
    }
    cout << ok << endl;
}
#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
ll monster(ll X){
    if(X == 1){
        return 1;
    }
    return 2 * monster(X / 2) + 1;
}
int main(){
    ll H;
    cin >> H;
    ll ans = monster(H);
    cout << ans << endl;
}
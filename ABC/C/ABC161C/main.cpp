#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int main(){
    ll N, K;
    cin >> N >> K;
    N %= K;
    ll ans = min(N, K - N);
    cout << ans << endl;
}
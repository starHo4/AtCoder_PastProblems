#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main(){
    int N;
    cin >> N;
    int A[N];
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    ll sum = 0;
    ll mod = pow(10, 9) + 7;
    for(int i=0; i<N; i++){
        sum += A[i];
        sum %= mod;
    }
    ll ans = 0;
    for(int i=0; i<N; i++){
        sum -= A[i];
        if(sum < 0){
            sum += mod;
        }
        ans += A[i] * sum;
        ans %= mod;
    }
    cout << ans << endl;
}
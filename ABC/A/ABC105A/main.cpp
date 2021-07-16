#include <iostream>
using namespace std;
int main(){
    int N, K;
    cin >> N >> K;
    int ans = 0;
    if(N % K) ans = 1;
    cout << ans << endl;
}
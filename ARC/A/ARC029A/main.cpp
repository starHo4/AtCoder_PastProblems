#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;
int main(){
    int N;
    cin >> N;
    int t[N];
    for(int i=0; i<N; i++){
        cin >> t[i];
    }
    int ans = 1000000000;
    for(int tmp=0; tmp<(1 << N); tmp++){
        bitset<4> bs(tmp);
        int time = 0;
        int sum_a = 0;
        int sum_b = 0;
        for(int i=0; i<N; i++){
            if(bs.test(i)){
                sum_b += t[i];
            } else {
                sum_a += t[i];
            }
        }
        time = max(sum_a, sum_b);
        ans = min(ans, time);
    }
    cout << ans << endl;
}
#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int X[N];
    double ave = 0;
    for(int i=0; i<N; i++){
        cin >> X[i];
        ave += X[i];
    }
    ave /= N;
    ave = (ave - (int)ave <= 0.5) ? (int)ave : (int)ave + 1;
    int ans = 0;
    for(int i=0; i<N; i++){
        ans += (X[i] - ave) * (X[i] - ave);
    }
    cout << ans << endl;
}
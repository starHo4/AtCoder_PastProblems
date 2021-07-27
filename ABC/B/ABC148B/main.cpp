#include <iostream>
using namespace std;
int main(){
    int N;
    string S, T;
    cin >> N >> S >> T;
    string ans = "";
    for(int i=0; i<2 * N; i++){
        ans += (i%2) ? T[i / 2] : S[i / 2];
    }
    cout << ans << endl;
}
#include <iostream>
using namespace std;
int main(){
    int N, A, B;
    cin >> N >> A >> B;
    int ans = B;
    if(N * A < B){
        ans = N * A;
    }
    cout << ans << endl;
}
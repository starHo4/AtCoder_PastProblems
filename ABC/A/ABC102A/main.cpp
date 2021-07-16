#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int ans = N;
    if(N%2) ans *= 2;
    cout << ans << endl;
}
#include <iostream>
using namespace std;
int main(){
    int X;
    cin >> X;
    int ans = (X / 500) * 1000;
    X %= 500;
    ans += (X / 5) * 5;
    cout << ans << endl;
}
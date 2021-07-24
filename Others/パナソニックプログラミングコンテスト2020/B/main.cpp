#include <iostream>
typedef unsigned long long ull;
using namespace std;
int main()
{
    ull H, W;
    cin >> H >> W;
    if(H == 1||W == 1){
        cout << 1 << endl;
        return 0;
    }
    ull ans = (H * W + 1) / 2;
    cout << ans << endl;
}
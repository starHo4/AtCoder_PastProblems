#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll;
int main()
{
    int N;
    cin >> N;
    vector<int> C(N);
    for (int i = 0; i < N; i++)
    {
        cin >> C[i];
    }
    sort(C.begin(), C.end());
    ll ans = 1;
    for (int i = 0; i < N; i++)
    {
        ans *= C[i] - i;
        ans %= (ll)pow(10, 9) + 7;
    }
    cout << ans << endl;
}
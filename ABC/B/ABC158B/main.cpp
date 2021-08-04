#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll N, A, B;
    cin >> N >> A >> B;
    ll ans = (N / (A + B)) * A;
    ll rem = N % (A + B);
    if (rem <= A)
    {
        ans += rem;
        cout << ans << endl;
        return 0;
    }
    ans += A;
    cout << ans << endl;
}
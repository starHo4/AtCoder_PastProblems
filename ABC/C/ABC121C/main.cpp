#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
typedef long long ll;
int main()
{
    ll N, M;
    cin >> N >> M;
    vector<pair<ll, ll> > vp(N);
    for (int i = 0; i < N; i++)
    {
        int A, B;
        cin >> A >> B;
        vp[i] = make_pair(A, B);
    }
    sort(vp.begin(), vp.end());
    ll ans = 0;
    ll cnt = 0;
    for (int i = 0; i < N; i++)
    {
        ll val = vp[i].first;
        ll num = vp[i].second;
        if (cnt + num > M)
        {
            ans += val * (M - cnt);
            cnt = M;
        }
        else
        {
            cnt += num;
            ans += val * num;
        }
        if(cnt == M){
            break;
        }
    }
    cout << ans << endl;
}
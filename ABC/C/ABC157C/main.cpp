#include <iostream>
#include <algorithm>
#include <cmath>
#include <set>
#include <vector>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    set<pair<int, int>> vp;
    for (int i = 0; i < M; i++)
    {
        int si, ci;
        cin >> si >> ci;
        vp.insert(make_pair(si, ci));
    }
    int ans = 0;
    vector<bool> f(N, false);
    if (M == 0)
    {
        if(N == 1){
            cout << 0 << endl;
            return 0;
        }
    }
    for (auto it = vp.begin(); it != vp.end(); it++)
    {
        int s = it->first;
        int c = it->second;
        if (N >= 2 && s == 1 && c == 0)
        {
            cout << -1 << endl;
            return 0;
        }
        if (f[s - 1])
        {
            cout << -1 << endl;
            return 0;
        }
        ans += pow(10, N - s) * c;
        f[s - 1] = true;
    }
    if (!f[0])
    {
        ans += pow(10, N - 1);
    }
    cout << ans << endl;
}
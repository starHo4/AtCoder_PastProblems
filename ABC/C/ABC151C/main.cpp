#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    vector<pair<int, string> > vp(M);
    for (int i = 0; i < M; i++)
    {
        int p;
        string S;
        cin >> p >> S;
        vp[i] = make_pair(p, S);
    }
    vector<bool> f_ac(N, false);
    vector<int> num_wa(N, 0);
    int cnt_ac, cnt_wa;
    cnt_ac = cnt_wa = 0;
    for (int i = 0; i < M; i++)
    {
        int now = vp[i].first - 1;
        if (!f_ac[now])
        {
            if (vp[i].second == "AC")
            {
                cnt_ac++;
                cnt_wa += num_wa[now];
                f_ac[now] = true;
            }
            if (vp[i].second == "WA")
            {
                num_wa[now]++;
            }
        }
    }
    cout << cnt_ac << " " << cnt_wa << endl;
}
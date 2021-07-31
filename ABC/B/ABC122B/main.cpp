#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string S;
    cin >> S;
    vector<int> v(S.size() + 1);
    v[0] = 0;
    int ans = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'A' || S[i] == 'G' || S[i] == 'C' || S[i] == 'T')
        {
            v[i + 1] = v[i] + 1;
        }
        else
        {
            v[i + 1] = 0;
        }
        ans = max(ans, v[i + 1]);
    }
    cout << ans << endl;
}
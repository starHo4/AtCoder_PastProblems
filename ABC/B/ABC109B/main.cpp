#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    map<string, int> mp;
    vector<string> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    for (int i = 1; i < N; i++)
    {
        string pre = v[i - 1];
        string now = v[i];
        if (mp[now] > 1)
        {
            cout << "No" << endl;
            return 0;
        }
        if (pre[pre.size() - 1] != now[0])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
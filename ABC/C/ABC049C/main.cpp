#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string S;
    cin >> S;
    reverse(S.begin(), S.end());
    string cand[4] = {"dream", "dreamer", "erase", "eraser"};
    for (int i = 0; i < 4; i++)
    {
        reverse(cand[i].begin(), cand[i].end());
    }
    for (int i = 0; i < S.size();)
    {
        bool f = false;
        for (int j = 0; j < 4; j++)
        {
            string c = cand[j];
            string sub = S.substr(i, c.size());
            if (c == sub)
            {
                f = true;
                i += c.size();
            }
        }
        if (!f)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}
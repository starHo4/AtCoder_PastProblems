#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int toNum(string s)
{
    int num = 0;
    for (int i = 0; i < s.size(); i++)
    {
        num *= 10;
        int each = s[i] - '0';
        num += each;
    }
    return num;
}
int main()
{
    string S;
    cin >> S;
    int ans = 753;
    for (int i = 0; i < S.size() - 2; i++)
    {

        string tmp = "";
        for (int j = 0; j < 3; j++)
        {
            tmp += S[i + j];
        }
        int num = toNum(tmp);
        ans = min(ans, abs(753 - num));
    }
    cout << ans << endl;
}
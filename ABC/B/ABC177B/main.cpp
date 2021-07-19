#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string S, T;
    cin >> S >> T;
    int len_s = S.size();
    int len_t = T.size();
    int ans = len_t;
    int num = 0;
    for (int i = 0; i <= len_s - len_t; i++)
    {
        int tmp = 0;
        for (int j = 0; j < len_t; j++)
        {
            if (S[i + j] == T[j])
            {
                tmp++;
            }
        }
        num = max(tmp, num);
    }
    ans -= num;
    cout << ans << endl;
}
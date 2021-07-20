#include <iostream>
using namespace std;
int main()
{
    string S;
    cin >> S;
    string tar = "CODEFESTIVAL2016";
    int ans = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] != tar[i])
        {
            ans++;
        }
    }
    cout << ans << endl;
}
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string S;
    cin >> S;
    vector<bool> check(26, false);
    for (int i = 0; i < S.size(); i++)
    {
        int ch = S[i] - 'a';
        if (!check[ch])
        {
            check[ch] = true;
        }
    }
    char ans = 'a';
    for (int i = 0; i < check.size(); i++)
    {
        if (!check[i])
        {
            ans += i;
            cout << (char)ans << endl;
            return 0;
        }
    }
    cout << "None" << endl;
}
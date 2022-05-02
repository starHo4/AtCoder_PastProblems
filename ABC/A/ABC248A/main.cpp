#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int ans = 0;
    vector<bool> v(10, false);

    for (int i = 0; i < S.size(); i++)
    {
        int index = S[i] - '0';
        v[index] = true;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (!v[i])
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
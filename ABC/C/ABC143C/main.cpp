#include <iostream>
using namespace std;
int main()
{
    int N;
    string S;
    cin >> N >> S;
    int ans = N;
    bool flag = false;
    for (int i = 0; i < N - 1; i++)
    {
        if (S[i] == S[i + 1])
        {
            ans--;
        }
    }
    cout << ans << endl;
}
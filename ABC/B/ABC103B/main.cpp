#include <iostream>
using namespace std;
int main()
{
    string S, T;
    cin >> S >> T;
    int N = S.size();
    for (int i = 0; i < N; i++)
    {
        if (S == T)
        {
            cout << "Yes" << endl;
            return 0;
        }
        char tmp = S[N - 1];
        for (int j = N - 1; j >= 1; j--)
        {
            S[j] = S[j - 1];
        }
        S[0] = tmp;
    }
    cout << "No" << endl;
}
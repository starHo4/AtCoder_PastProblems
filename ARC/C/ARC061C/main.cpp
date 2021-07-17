#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;
typedef long long ll;
int main()
{
    string S;
    cin >> S;
    ll out = 0;
    int N = S.length();
    ll sum = 0;
    // main processing
    for (int i = 0; i < (1 << (N - 1)); i++)
    {
        ll s = 0;
        for (int j = 0; j < N; j++)
        {
            s *= 10;
            s += S[j] - '0';
            if (i & (1 << j))
            {
                sum += s;
                s = 0;
            }
        }
        sum += s;
    }
    cout << sum << endl;
}
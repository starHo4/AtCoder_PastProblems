#include <iostream>
using namespace std;
int main()
{
    int N, ans;
    cin >> N;
    if (N <= 125)
    {
        ans = 4;
    }
    else if (N <= 211)
    {
        ans = 6;
    }
    else
    {
        ans = 8;
    }
    cout << ans << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    string ans = "No";
    if (A >= C || B >= C || A + B >= C)
    {
        ans = "Yes";
    }
    cout << ans << endl;
}
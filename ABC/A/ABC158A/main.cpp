#include <iostream>
using namespace std;
int main()
{
    string S;
    cin >> S;
    string ans = "Yes";
    if (S == "AAA" || S == "BBB")
    {
        ans = "No";
    }
    cout << ans << endl;
}
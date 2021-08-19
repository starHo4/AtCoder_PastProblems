#include <iostream>
using namespace std;
string tar[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
int main()
{
    string S;
    cin >> S;
    int ans = 7;
    for (int i = 0; i < 7; i++)
    {
        if (S == tar[i])
        {
            ans -= i;
            break;
        }
    }
    cout << ans << endl;
}
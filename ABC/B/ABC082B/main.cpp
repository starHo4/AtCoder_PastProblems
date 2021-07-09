#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<char>());
    string out = "No";
    if (s < t)
    {
        out = "Yes";
    }
    cout << out << endl;
}
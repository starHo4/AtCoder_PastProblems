#include <iostream>
using namespace std;
int main()
{
    int r, g, b;
    cin >> r >> g >> b;
    string s = "NO";
    if ((10 * g + b) % 4 == 0)
    {
        s = "YES";
    }
    cout << s << endl;
}

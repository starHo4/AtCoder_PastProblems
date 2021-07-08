#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    string o;
    if (a == b + c || b == c + a || c == a + b)
    {
        o = "Yes";
    }
    else
    {
        o = "No";
    }
    cout << o << endl;
}
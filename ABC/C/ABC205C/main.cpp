#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    if (A > 0 && B > 0)
    {
        if (A < B)
        {
            cout << "<" << endl;
        }
        else if (A > B)
        {
            cout << ">" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
    if (A < 0 || B < 0)
    {
    }
}
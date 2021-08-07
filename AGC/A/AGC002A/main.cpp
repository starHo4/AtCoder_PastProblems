#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll a, b;
    cin >> a >> b;
    if (a * b <= 0)
    {
        cout << "Zero" << endl;
        return 0;
    }
    if (a > 0)
    {
        cout << "Positive" << endl;
        return 0;
    }
    if (b < 0)
    {
        int num = b - a + 1;
        if (num % 2)
        {
            cout << "Negative" << endl;
        }
        else
        {
            cout << "Positive" << endl;
        }
    }
}
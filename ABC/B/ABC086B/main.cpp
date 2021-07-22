#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    string c = a + b;
    int num = 0;
    for (int i = c.size() - 1; i >= 0; i--)
    {
        num += (c[i] - '0') * pow(10, c.size() - 1 - i);
    }
    int r = sqrt(num);
    if (r * r == num)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
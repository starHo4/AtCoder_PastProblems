#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    if (B == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << B / (A - 1) << endl;
}
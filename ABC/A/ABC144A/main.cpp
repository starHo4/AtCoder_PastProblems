#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    int out = -1;
    if (0 < A && A <= 9 && 0 < B && B <= 9)
    {
        out = A * B;
    }
    cout << out << endl;
}
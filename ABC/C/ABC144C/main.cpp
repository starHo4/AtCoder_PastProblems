#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main()
{
    ll N;
    cin >> N;
    ll A, B;
    A = B = -1;
    for (int i = sqrt(N); i >= 1; i--)
    {
        if (N % i == 0)
        {
            A = i;
            B = N / A;
            break;
        }
    }
    cout << A + B - 2 << endl;
}
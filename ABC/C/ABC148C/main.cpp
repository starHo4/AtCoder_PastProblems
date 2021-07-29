#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll Euclidean(ll A, ll B)
{
    if (A < B)
    {
        swap(A, B);
    }
    if (A % B == 0)
    {
        return B;
    }
    return Euclidean(B, A % B);
}
int main()
{
    ll A, B;
    cin >> A >> B;
    ll gcd = Euclidean(A, B);
    cout << A / gcd * B << endl;
}
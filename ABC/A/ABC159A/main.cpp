#include <iostream>
using namespace std;

int Combination(int n, int r)
{
    int Denom = r;
    for (int i = 0; i < r - 1; i++)
    {
        r--;
        Denom *= r;
    }
    int Numer = n;
    for (int i = 0; i < r; i++)
    {
        n--;
        Numer *= n;
    }
    return Numer / Denom;
}

int main()
{
    int N, M;
    cin >> N >> M;
    cout << Combination(N, 2) + Combination(M, 2) << endl;
}
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
bool isPrime(int X)
{
    if (X == 2)
    {
        return true;
    }
    if (X % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i <= (int)sqrt(X); i += 2)
    {
        if (X % i == 0)
        {
            return false;
        }
    }
    return true;
}
int NextPrime(int X)
{
    if (isPrime(X))
    {
        return X;
    }
    X++;
    if (isPrime(X))
    {
        return X;
    }
    else
    {
        return NextPrime(X);
    }
}
int main()
{
    int X;
    cin >> X;
    cout << NextPrime(X) << endl;
}
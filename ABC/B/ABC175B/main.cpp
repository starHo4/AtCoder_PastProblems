#include <iostream>
using namespace std;
bool isTriangle(int a, int b, int c)
{
    bool o = false;
    if (a == b || b == c || c == a)
    {
        return false;
    }
    if (a + b > c && b + c > a && c + a > b)
    {
        o = true;
    }
    return o;
}
int main()
{
    int N;
    cin >> N;
    int L[N];
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
    }
    int out = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                if (isTriangle(L[i], L[j], L[k]))
                {
                    out++;
                }
            }
        }
    }
    cout << out << endl;
}
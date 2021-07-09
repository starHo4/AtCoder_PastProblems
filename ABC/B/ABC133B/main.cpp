#include <iostream>
using namespace std;
bool isSquare(int n)
{
    bool b = false;
    for (int i = 1; i <= n; i++)
    {
        if (n == i * i)
        {
            b = true;
        }
    }
    return b;
}
int main()
{
    int N, D;
    cin >> N >> D;
    int X[N][D];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < D; j++)
        {
            cin >> X[i][j];
        }
    }
    int out = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int sum = 0;
            for (int k = 0; k < D; k++)
            {
                sum += (X[i][k] - X[j][k]) * (X[i][k] - X[j][k]);
            }
            if (isSquare(sum))
            {
                out++;
            }
        }
    }
    cout << out << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int N, X;
    cin >> N >> X;
    int M[N];
    for (int i = 0; i < N; i++)
    {
        cin >> M[i];
    }
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += M[i];
    }
    int min = M[0];
    for (int i = 1; i < N; i++)
    {
        if (M[i] < min)
        {
            min = M[i];
        }
    }
    int out = N + (X - sum) / min;
    cout << out << endl;    
}
#include <iostream>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    int out = 1;
    for (int i = 0; i < N; i++)
    {
        if (out * 2 < out + K)
        {
            out *= 2;
        }
        else
        {
            out += K;
        }
    }
    cout << out << endl;
}
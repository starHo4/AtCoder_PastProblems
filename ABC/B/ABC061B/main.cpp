#include <iostream>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    int a[M], b[M];
    for (int i = 0; i < M; i++)
    {
        cin >> a[i] >> b[i];
    }
    int out[N];
    for (int i = 0; i < N; i++)
    {
        out[i] = 0;
        for (int j = 0; j < M; j++)
        {
            if (i + 1 == a[j] || i + 1 == b[j])
            {
                out[i]++;
            }
        }
        cout << out[i] << endl;
    }
}
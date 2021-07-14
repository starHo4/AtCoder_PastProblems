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
    int road[N];
    for (int i = 0; i < N; i++)
    {
        road[i] = 0;
    }
    for (int i = 0; i < M; i++)
    {
        road[a[i] - 1]++;
        road[b[i] - 1]++;
    }
    for (int i = 0; i < N; i++)
    {
        cout << road[i] << endl;
    }
}
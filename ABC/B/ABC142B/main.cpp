#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> h(N);
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (h[i] >= K)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
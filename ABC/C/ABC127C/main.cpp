#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> L(M);
    vector<int> R(M);
    for (int i = 0; i < M; i++)
    {
        cin >> L[i] >> R[i];
    }
    int l = *max_element(L.begin(), L.end());
    int r = *min_element(R.begin(), R.end());
    if (l <= r)
    {
        cout << r - l + 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}
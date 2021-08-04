#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int sum = accumulate(A.begin(), A.end(), 0);
    double thr = (double) sum * (1 / (4 * (double) M));
    int ans = 0;
    for (int i = 0; i < N; i++)
    {

        if (A[i] >= thr)
        {
            ans++;
        }
        if (ans == M)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    vector<int> B(M);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }
    int mx = 1000000010;
    int ans = mx;
    B.push_back(-1);
    B.push_back(mx);
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j < M + 2; j++)
        {
            if (B[j - 1] <= A[i] && A[i] <= B[j])
            {
                if (B[j - 1] < 0)
                {
                    ans = min(ans, B[j] - A[i]);
                }
                else if (B[j] == mx)
                {
                    ans = min(ans, A[i] - B[j - 1]);
                }
                else
                {
                    ans = min(A[i] - B[j - 1], B[j] - A[i]);
                }
                break;
            }
        }
    }
    cout << ans << endl;
}
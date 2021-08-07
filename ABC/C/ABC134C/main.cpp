#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    B = A;
    sort(B.begin(), B.end());
    int mx = B[N - 1];
    int s_mx = B[N - 2];
    for (int i = 0; i < N; i++)
    {
        if (A[i] == mx)
        {
            cout << s_mx << endl;
        }
        else
        {
            cout << mx << endl;
        }
    }
}
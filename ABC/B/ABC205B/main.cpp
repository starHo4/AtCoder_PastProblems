#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < N; i++)
    {
        if (A[i] != i + 1)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
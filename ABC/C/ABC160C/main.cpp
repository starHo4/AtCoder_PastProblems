#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int K, N;
    cin >> K >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int M = 0;
    for (int i = 0; i < N; i++)
    {
        if(i == N-1){
            M = max(M, K + A[0] - A[i]);
            continue;
        }
        M = max(M, A[i + 1] - A[i]);
    }
    cout << K - M << endl;
}
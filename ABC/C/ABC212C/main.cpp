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
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for(int i=0; i<N; i++){
        
    }
}
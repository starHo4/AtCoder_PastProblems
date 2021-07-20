#include <iostream>
using namespace std;
int main()
{
    int N, M, C;
    cin >> N >> M >> C;
    int B[M];
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }
    int A[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }
    int ans = 0;
    for(int i=0; i<N; i++){
        int tmp = 0;
        for(int j=0; j<M; j++){
            tmp += A[i][j] * B[j];
            if(j == M-1) {
                tmp += C;
            }
        }
        if(tmp > 0){
            ans++;
        }
    }
    cout << ans << endl;
}
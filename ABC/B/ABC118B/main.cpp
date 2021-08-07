#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    vector<bool> check(M, true);
    for (int i = 0; i < N; i++)
    {
        int Ki;
        cin >> Ki;
        vector<bool> tmp(M, false);
        for (int j = 0; j < Ki; j++)
        {
            int a;
            cin >> a;
            tmp[a - 1] = true;
        }
        for (int j = 0; j < M; j++)
        {
            check[j] = check[j] & tmp[j];
        }
    }
    int ans = 0;
    for(int i=0; i<M; i++){
        if(check[i]){
            ans++;
        }
    }
    cout << ans << endl;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> c(N);
    for (int i = 0; i < N; i++)
    {
        cin >> c[i];
    }
    int ans = 0;
    for (int i = 0; i < N - K + 1; i++)
    {
        vector<int> tmp(K);
        for (int j = i; j < i + K; j++)
        {
            tmp[j-i] = c[j];
        }
        sort(tmp.begin(), tmp.end());
        decltype(tmp)::iterator result = unique(tmp.begin(), tmp.end());
        tmp.erase(result, tmp.end());
        int c_num = tmp.size();
        if(ans < c_num){
            ans = c_num;
        }
    }
    cout << ans << endl;
}
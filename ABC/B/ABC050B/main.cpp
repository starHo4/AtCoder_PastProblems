#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> T(N);
    for (int i = 0; i < N; i++)
    {
        cin >> T[i];
    }
    int M;
    cin >> M;
    vector<pair<int, int> > p(M);
    vector<int> ans(M, 0);
    for (int i = 0; i < M; i++)
    {
        int Pi, Xi;
        cin >> Pi >> Xi;
        Pi--;
        p[i] = make_pair(Pi, Xi);
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (p[i].first == j)
            {
                ans[i] += p[i].second;
            }
            else
            {
                ans[i] += T[j];
            }
        }
    }
    for(int i=0; i<M; i++){
        cout << ans[i] << endl;
    }
}
#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;
bool compare_by_b(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
    {
        return a.second < b.second;
    }
    else
    {
        return a.first < b.first;
    }
}
int main()
{
    int H, W, N;
    cin >> H >> W >> N;
    vector<pair<int, int> > As(N);
    vector<pair<int, int> > Bs(N);
    for (int i = 0; i < N; i++)
    {
        int Ai, Bi;
        cin >> Ai >> Bi;
        As[i] = make_pair(i, Ai);
        Bs[i] = make_pair(i, Bi);
    }
    sort(As.begin(), As.end(), compare_by_b);
    sort(Bs.begin(), Bs.end(), compare_by_b);
    for (int i = 0; i < N; i++)
    {
        As[i].second = i + 1;
        Bs[i].second = i + 1;
    }
    sort(As.begin(), As.end());
    sort(Bs.begin(), Bs.end());
    for (int i = 0; i < N; i++)
    {
        cout << As[i].second << " " << Bs[i].second << endl;
    }
}
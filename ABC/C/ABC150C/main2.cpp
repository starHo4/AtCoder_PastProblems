#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> P(N), Q(N);
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
        P[i]--;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> Q[i];
        Q[i]--;
    }
    map<vector<int>, int> ord;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        v[i] = i;
    }
    int iter = 0;
    do
    {
        ord[v] = iter++;
    } while (next_permutation(v.begin(), v.end()));
    cout << abs(ord[P] - ord[Q]) << endl;
}
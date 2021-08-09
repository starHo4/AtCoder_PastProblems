#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
vector<int> ans;
stack<int> st;
int next_cities(vector<pair<int, int> > &pathes)
{
    queue<int> next_cand;
    for (int i = 0; i < N - 1; i++)
    {
        int f = pathes[i].first;
        int s = pathes[i].second;
        if (f == now)
        {
            next_cand.push_back(s);
        }
        if (s == now)
        {
            next_cand.push_back(f);
        }
    }
    int next = next_cand.pop();
    if (next_cand.empty())
    {
        st.push(next);
        while (st.empty())
        {
            ans.push_back(st.pop());
        }
    }
    else
    {
        next_cities(pathes);
    }
}
int main()
{
    int N;
    cin >> N;
    vector<pair<int, int> > pathes(N - 1);
    for (int i = 0; i < N - 1; i++)
    {
        int Ai, Bi;
        cin >> Ai >> Bi;
        pathes[i] = make_pair(Ai, Bi);
    }
    int now = 1;
    st.push(now);
    ans.push_back(now);
    while (!st.empty())
    {
        next_cities(pathes);
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
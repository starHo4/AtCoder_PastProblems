#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int Fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * Fact(n - 1);
}
int Index(int N, vector<int> &l)
{
    int len = l.size();
    for (int i = 0; i < len; i++)
    {
        if (N == l[i])
        {
            return i;
        }
    }
    return -1;
}
int countOrder(vector<int> &P)
{
    int N = P.size();
    int out = 1;
    vector<int> l(N);
    for (int i = 1; i <= N; i++)
    {
        l[i - 1] = i;
    }
    for (int i = 0; i < N; i++)
    {
        out += Index(P[i], l) * Fact(l.size() - 1);
        l.erase(l.begin() + Index(P[i], l));
    }
    return out;
}
int main()
{
    int N;
    cin >> N;
    vector<int> P(N), Q(N);
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> Q[i];
    }
    int pnum, qnum;
    pnum = qnum = 0;
    for (int i = 0; i < N; i++)
    {
        pnum = countOrder(P);
        qnum = countOrder(Q);
    }
    cout << abs(pnum - qnum) << endl;
}
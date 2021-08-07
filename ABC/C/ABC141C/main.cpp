#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> score(N, K - Q);
    vector<int> A(Q);
    for (int i = 0; i < Q; i++)
    {
        int Ai;
        cin >> Ai;
        score[Ai - 1]++;
    }
    for (int i = 0; i < N; i++)
    {
        if (score[i] > 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
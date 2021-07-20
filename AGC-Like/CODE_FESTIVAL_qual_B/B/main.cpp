#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, A, B;
    string S;
    cin >> N >> A >> B >> S;
    vector<string> ans(N, "No");
    int count = 0;
    int b_count = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'c')
        {
            cout << ans[i] << endl;
            continue;
        }
        if (S[i] == 'a')
        {
            if (count < A + B)
            {
                count++;
                ans[i] = "Yes";
            }
        }
        if (S[i] == 'b')
        {
            if (count < A + B && b_count < B)
            {
                count++;
                b_count++;
                ans[i] = "Yes";
            }
        }
        cout << ans[i] << endl;
    }
}
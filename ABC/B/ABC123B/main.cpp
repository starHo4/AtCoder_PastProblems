#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> p(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    int ans = 10000;
    do
    {
        int time = 0;
        for (int i = 0; i < 5; i++)
        {
            if (time % 10 == 0)
            {
                time += p[i];
            }
            else
            {
                time += p[i] + (10 - time % 10);
            }
        }
        ans = min(ans, time);
    } while (next_permutation(p.begin(), p.end()));
    cout << ans << endl;
}
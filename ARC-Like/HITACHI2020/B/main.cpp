#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int A, B, M;
    cin >> A >> B >> M;
    vector<int> a(A);
    vector<int> b(B);
    for (int i = 0; i < A; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < B; i++)
    {
        cin >> b[i];
    }
    vector<vector<int> > m(M, vector<int>(3, 0));
    for (int i = 0; i < M; i++)
    {
        int x, y, c;
        cin >> x >> y >> c;
        m[i][0] = x;
        m[i][1] = y;
        m[i][2] = c;
    }
    int non_m = 0;
    non_m += *min_element(a.begin(), a.end());
    non_m += *min_element(b.begin(), b.end());
    int use_m = 200200;
    for (int i = 0; i < M; i++)
    {
        int each_m = a[m[i][0] - 1] + b[m[i][1] - 1] - m[i][2];
        use_m = min(use_m, each_m);
    }
    int ans = min(non_m, use_m);
    cout << ans << endl;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int N, x;
    cin >> N >> x;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        x -= a[i];
        if(x < 0){
            break;
        }
        ans++;
    }
    if(x > 0) ans--;
    cout << ans << endl;
}
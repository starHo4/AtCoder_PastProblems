#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> a(N, 0);
    long long  sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        sum += a[i] - 1;
    }
    cout << sum << endl;
}
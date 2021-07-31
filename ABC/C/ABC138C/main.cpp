#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<double> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<double>());
    for (int i = 0; i < N - 1; i++)
    {
        double z = v.back();
        v.pop_back();
        double y = v.back();
        v.pop_back();
        v.push_back((y + z) / 2);
    }
    cout << v.front() << endl;
}
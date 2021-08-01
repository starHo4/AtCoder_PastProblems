#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;
vector<ll> bag;
void manip1(ll n)
{
    bag.push_back(n);
}
void manip2(ll n)
{
    for (int i = 0; i < bag.size(); i++)
    {
        bag[i] += n;
    }
}
void manip3()
{
    sort(bag.begin(), bag.end());
    cout << bag[0] << endl;
    bag.erase(bag.begin());
}
int main()
{
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int pi;
        cin >> pi;
        if (pi == 1)
        {
            ll xi;
            cin >> xi;
            manip1(xi);
        }
        else if (pi == 2)
        {
            ll xi;
            cin >> xi;
            manip2(xi);
        }
        else
        {
            manip3();
        }
    }
}
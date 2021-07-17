#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
ll calc(string S)
{
    int len = S.length();
    ll out = stoll(S);
    if(len == 1){
        return out;
    }
    for (int i = 1; i < len; i++)
    {
        string sl = S.substr(0, i);
        string sr = S.substr(i);
        out += stoll(sl) * pow(2, len-i-1);
        out += calc(sr);
    }
    return out;
}
int main()
{
    string S;
    cin >> S;
    ll ans = calc(S);
    cout << ans << endl;
}
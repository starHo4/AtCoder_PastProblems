#include <iostream>
#include <map>
using namespace std;
int main()
{
    string S;
    cin >> S;
    map<char, int> mp;
    for (int i = 0; i < S.size(); i++)
    {
        mp[S[i]]++;
    }
    string ans = "Yes";
    if (mp['N'] && !mp['S'])
    {
        ans = "No";
    }
    if(mp['S'] && !mp['N']){
        ans = "No";
    }
    if(mp['W'] && !mp['E']){
        ans = "No";
    }
    if(mp['E'] && !mp['W']){
        ans = "No";
    }
    cout << ans << endl;
}
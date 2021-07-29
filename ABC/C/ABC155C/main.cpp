#include <iostream>
#include <map>
using namespace std;
int main()
{
    int N;
    cin >> N;
    map<string, int> mp;
    for (int i = 0; i < N; i++)
    {
        string S;
        cin >> S;
        mp[S]++;
    }
    int mx = -1;
    for (auto x : mp)
    {
        if(mx < x.second){
            mx = x.second;
        }
    }
    for(auto i = mp.begin(); i != mp.end(); i++){
        if(i->second == mx){
            cout << i->first << endl;
        }
    }
}
#include <iostream>
using namespace std;
int main()
{
    string O, E;
    cin >> O >> E;
    int lenO = O.size();
    int lenE = E.size();
    string ans = "";
    for (int i = 0; i < lenO + lenE; i++)
    {
        if (i % 2)
        {
            ans += E[i / 2];
        }
        else
        {
            ans += O[i / 2];
        }
    }
    cout << ans << endl;
}
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string S;
    int k;
    cin >> S >> k;
    sort(S.begin(), S.end());
    while(k > 1)
    {
        next_permutation(S.begin(), S.end());
        k--;
    }   
    cout << S << endl;
}
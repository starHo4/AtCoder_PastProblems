#include <iostream>
#include <cmath>
#include <map>
#include <vector>
using namespace std;
typedef long long ll;
string target = "chokudai";
ll calc_sum(vector<vector<int> > &dp){
    ll ans = 0;
}
int main()
{
    string S;
    cin >> S;
    int n = S.size();
    vector<vector<int> > dp(n, vector<int>(8, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<8; j++){
            if(target[j] == S[i]){
                dp[i][j]++;
            }
        }
    }
    ll ans = calc_sum(dp);
    cout << ans << endl;
}
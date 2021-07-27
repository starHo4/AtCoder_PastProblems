#include <iostream>
using namespace std;
int main(){
    string S;
    cin >> S;
    string ans = "No";
    if(S[2] == S[3] && S[4] == S[5]){
        ans = "Yes";
    }
    cout << ans << endl;
}
#include <iostream>
#include <map>
using namespace std;
int main(){
    string S;
    cin >> S;
    map<char, int> mp;
    for(int i=0; i<S.size(); i++){
        mp[S[i]]++;
    }
    if(mp.size() == 2 && mp[S[0]] == 2){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
}
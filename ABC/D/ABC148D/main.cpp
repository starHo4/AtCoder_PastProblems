#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    map<int, int> mp;
    for(int i=0; i<N; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    int ans = 0;
    if(mp[1] == 0){
        cout << -1 << endl;
        return 0;
    }
    vector<bool> check(N, false);
    int now = 1;
    for(int i=0; i<N; i++){
        if(a[i] == now && !check[i]){
            check[i] = true;
            now++;
        }
        else{
            ans++;
        }
    }
    cout << ans << endl;
}
#include <iostream>
#include <algorithm>
#include <tuple>
#include <vector>
using namespace std;
using tpl = tuple<string, int, int>;
using vtpl = vector<tpl>;
int main(){
    int N;
    cin >> N;
    vtpl spi(N);
    for(int i=0; i<N; i++){
        string s;
        int p;
        cin >> s >> p;
        spi[i] = make_tuple(s, -p, i + 1);
    }
    sort(spi.begin(), spi.end());
    for(int i=0; i<N; i++){
        int index;
        tie(ignore, ignore, index) = spi[i];
        cout << index << endl;
    }
}

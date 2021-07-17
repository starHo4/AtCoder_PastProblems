#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
typedef long long ll;
int main(){
    int H, W, C;
    cin >> H >> W >> C;
    vvi A(H, vi(W));
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> A[i][j];
        }
    }
}
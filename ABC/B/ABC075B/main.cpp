#include <iostream>
using namespace std;
int main(){
    int H, W;
    cin >> H >> W;
    string S[H];
    for(int i=0; i<H; i++) cin >> S[i];
    for(int y=0; y<H; y++){
        for(int x=0; x<W; x++){
            if(S[y][x] == '.'){
                S[y][x] = '0';
                for(int dx = -1; dx <= 1; dx++){
                    for(int dy = -1; dy <= 1; dy++){
                        if(dx == 0 && dy == 0) continue;
                        int xx = x + dx;
                        int yy = y + dy;
                        if(0 <= xx && xx < W && 0 <= yy && yy < H){
                            if(S[yy][xx] == '#') S[y][x]++;
                        }
                    }
                }
            }
        }
        cout << S[y] << endl;
    }
}
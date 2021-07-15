#include <iostream>
using namespace std;
int main(){
    int N, M;
    cin >> N;
    string s[N];
    for(int i=0; i<N; i++) cin >> s[i];
    cin >> M;
    string t[M];
    for(int i=0; i<M; i++) cin >> t[i];
    int max = 0;
    for(int i=0; i<N; i++){
        string tar = s[i];
        int score = 0;
        for(int j=0; j<N; j++){
            if(s[j] == tar){
                score++;
            }
        }
        for(int j=0; j<M; j++){
            if(t[j] == tar){
                score--;
            }
        }
        if(max < score){
            max = score;
        }
    }
    cout << max << endl;
}
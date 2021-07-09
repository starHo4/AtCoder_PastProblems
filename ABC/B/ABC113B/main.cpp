#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N, T, A;
    cin >> N >> T >> A;
    int H[N];
    double diff[N];
    for(int i=0; i<N; i++){
        cin >> H[i];
    }
    for(int i=0; i<N; i++){
        double Ti = T - H[i] * 0.006;
        diff[i] = abs(Ti - A);
    }
    double mindiff = diff[0];
    int out = 1;
    for(int i=1; i<N; i++){
        if(diff[i] < mindiff){
            mindiff = diff[i];
            out = i + 1;
        }
    }
    cout << out << endl;
}
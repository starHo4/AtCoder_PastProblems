#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N;
    cin >> N;
    int a[N];
    for(int i=0; i<N; i++) cin >> a[i];
    sort(a,a+N,greater<int>());
    int score = 0;
    for(int i=0; i<N; i++){
        if(i%2) score -= a[i];
        else score += a[i];
    }
    cout << score << endl;
}
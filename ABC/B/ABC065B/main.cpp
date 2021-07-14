#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int a[N];
    for(int i=0; i<N; i++){
        int x;
        cin >> x;
        a[i] = x - 1;
    }
    int count = 0;
    int now = 0;
    while(true){
        if(now == 1){
            cout << count << endl;
            break;
        }
        if(count >= N){
            cout << -1 << endl;
            break;
        }
        count++;
        now = a[now];
    }
}
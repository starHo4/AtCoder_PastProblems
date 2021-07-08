#include <iostream>
using namespace std;
int f(int n){
    int s = 0;
    while(n > 0){
        s += n % 10;
        n /= 10;
    }
    return s;
}
int main(){
    int N, A, B;
    cin >> N >> A >> B;
    int t = 0;
    for(int i=1; i<=N; i++){
        int s = f(i);
        if(A <= s && s <= B){
            t += i;
        }
    }
    cout << t << endl;
}
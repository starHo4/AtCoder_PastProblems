#include <iostream>
using namespace std;
int main(){
    int N, K, X, Y;
    cin >> N >> K >> X >> Y;
    int total;
    total = (N < K) ? N * X : K * X + (N - K) * Y;
    cout << total << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int N, K, M;
    cin >> N >> K >> M;
    int A[N - 1];
    int sum = 0;
    for (int i = 0; i < N - 1; i++)
    {
        cin >> A[i];
        sum += A[i];
    }
    int goal = N * M;
    if(sum >= goal){
        cout << 0 << endl;
    }
    else if(goal - sum > K){
        cout << -1 << endl;
    }
    else {
        cout << goal - sum << endl;
    }
}
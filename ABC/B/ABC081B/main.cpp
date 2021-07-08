#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];
    int c = 0;
    while(true){
        bool odd = false;
        for(int i=0; i<N; i++){
            if(A[i] % 2) {
                odd = true;
                break;
            } else {
                A[i] /= 2;
            }
        }
        if(odd) break;
        c++;
    }
    cout << c << endl;
}
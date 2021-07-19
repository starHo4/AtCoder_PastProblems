#include <iostream>
using namespace std;
int main(){
    int N, X;
    cin >> N >> X;
    int A[N];
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    for(int i=0; i<N; i++){
        if(i%2){
            A[i]--;
        }
        X -= A[i];
        if(X < 0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
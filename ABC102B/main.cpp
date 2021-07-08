#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int A[N];
    for(int i=0; i<N; i++) cin >> A[i];
    int max = 0;
    int min = 1000000001;
    for(int i=0; i<N; i++){
        if(max < A[i]){
            max = A[i];
        }
        if(min > A[i]){
            min = A[i];
        }
    }
    cout << max - min << endl;
}
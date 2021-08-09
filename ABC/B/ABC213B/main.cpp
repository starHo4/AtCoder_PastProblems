#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    B = A;
    sort(B.begin(), B.end(), greater<int>());
    int obj = B[1];
    for(int i=0; i<N; i++){
        if(A[i] == obj){
            cout << i + 1 << endl;
            return 0;
        }
    }
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    for(int i=1; i<N; i++){
        if(A[i-1] == A[i]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}
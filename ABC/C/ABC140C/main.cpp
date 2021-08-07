#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N-1);
    for(int i=0; i<N-1; i++){
        cin >> B[i];
    }
    A[0] = B[0];
    A[N-1] = B[N-2];
    for(int i=0; i<N-2; i++){
        int tmp = B[i];
        if(tmp > B[i+1]){
            tmp = B[i+1];
        }
        A[i+1] = tmp;
    }
    int ans = accumulate(A.begin(), A.end(), 0);
    cout << ans << endl;
}
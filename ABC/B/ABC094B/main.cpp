#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int N, M, X;
    cin >> N >> M >> X;
    vector<int> A(M);
    for(int i=0; i<M; i++){
        cin >> A[i];
    }
    A.push_back(X);
    sort(A.begin(), A.end());
    int count_l, count_r;
    count_l = count_r = 0;
    for(int i=0; i<A.size(); i++){
        if(A[i] < X){
            count_l++;
        }
        if(A[i] > X){
            count_r++;
        }
    }
    cout << min(count_l, count_r) << endl;
}
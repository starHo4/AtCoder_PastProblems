#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int d[N];
    for(int i=0; i<N; i++) cin >> d[i];
    int num[110] = {0};
    for(int i=0; i<N; i++) num[d[i]]++;
    int o = 0;
    for(int i=1; i<=100; i++) if(num[i]) o++;
    cout << o << endl;
}
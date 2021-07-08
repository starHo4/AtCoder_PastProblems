#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    string s;
    for(int i=0; i<3; i++){
        int in;
        cin >> in;
        v.push_back(in);
    }
    sort(v.begin(), v.end());
    if(v[0]==5 && v[1] == 5 && v[2] == 7){
        s = "YES";
    } else{
        s = "NO";
    }
    cout << s << endl;
}
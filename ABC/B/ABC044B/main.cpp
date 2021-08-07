#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string w;
    cin >> w;
    vector<int> num(26, 0);
    for (int i = 0; i < w.size(); i++)
    {
        int ch = w[i] - 'a';
        num[ch]++;
    }
    for(int i=0; i<26; i++){
        if(num[i]%2 == 1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
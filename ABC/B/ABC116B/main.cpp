#include <iostream>
#include <map>
using namespace std;
int main()
{
    int s;
    cin >> s;
    map<int, int> count;
    count[s]++;
    int ans = -1;
    int i = 2;
    for (;; i++)
    {
        if(s % 2){
            s = 3 * s + 1;
        } else {
            s /= 2;
        }
        count[s]++;
        if(count[s] > 1){
            break;
        }
    }
    cout << i << endl;
}
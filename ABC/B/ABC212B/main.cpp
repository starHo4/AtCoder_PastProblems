#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string X;
    cin >> X;
    vector<int> c(4, 0);
    vector<bool> next(4, false);
    string ans = "Strong";
    for (int i = 0; i < 4; i++)
    {
        if (i == 0)
        {
            c[i] = 1;
            next[i] = true;
        }
        else
        {
            int num_pre = X[i - 1] - '0';
            int num_now = X[i] - '0';
            if (num_pre == num_now)
            {
                c[i] = c[i - 1] + 1;
            }
            else if(0 <= num_pre && num_pre <= 8){
                if(num_pre + 1 == num_now){
                    next[i] = true;
                }
            }
            else if(num_pre == 9){
                if(num_now == 0){
                    next[i] = true;
                }
            }
        }
    }
    if(c[3] == 4){
        ans = "Weak";
        cout << ans << endl;
        return 0;
    }
    bool f = true;
    for(int i=0; i<4; i++){
        if(!next[i]){
            f = false;
        }
    }
    if(f){
        ans = "Weak";
        cout << ans << endl;
        return 0;
    }
    cout << ans << endl;
}
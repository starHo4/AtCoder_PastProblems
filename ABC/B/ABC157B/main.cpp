#include <iostream>
#include <vector>
using namespace std;
bool checkBingo(vector<bool> &f)
{
    if (f[0])
    {
        if ((f[1] && f[2]) || (f[4] && f[8]) || (f[3] && f[6]))
        {
            return true;
        }
    }
    if (f[1])
    {
        if (f[4] && f[7])
        {
            return true;
        }
    }
    if (f[2])
    {
        if ((f[5] && f[8]) || (f[4] && f[6]))
        {
            return true;
        }
    }
    if(f[3]){
        if(f[4] && f[5]){
            return true;
        }
    }
    if(f[6]){
        if(f[7] && f[8]){
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int> A(9);
    vector<bool> f(9);
    for (int i = 0; i < 9; i++)
    {
        cin >> A[i];
        f[i] = false;
    }
    int N;
    cin >> N;
    int b[N];
    for (int i = 0; i < N; i++)
    {
        cin >> b[i];
        for (int j = 0; j < 9; j++)
        {
            if (A[j] == b[i])
            {
                f[j] = true;
                break;
            }
        }
        if (checkBingo(f))
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
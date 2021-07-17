#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int len = S.length();
    int a[len];
    for (int i = 0; i < len; i++)
    {
        a[i] = S[i] - '0';
    }
    string out = to_string(a[0]);
    string op[len-1];
    int sum;
    for (int i = 0; i < (1 << (len - 1)); i++)
    {
        bitset<3> tmp(i);
        sum = a[0];
        for (int j = 0; j < len-1; j++)
        {
            if (tmp.test(j))
            {
                sum -= a[j+1];
                op[j] = "-";
            }
            else
            {
                sum += a[j+1];
                op[j] = "+";
            }
        }
        if (sum == 7)
        {
            break;
        }
    }
    for(int i=0; i<len-1; i++){
        out += op[i];
        out += to_string(a[i+1]);
    }
    out += "=7";
    cout << out << endl;
}
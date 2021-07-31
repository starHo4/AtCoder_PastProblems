#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    if(A % 2 || B % 2 || C % 2){
        cout << 0 << endl;
        return 0;
    }
    int fA = A;
    int fB = B;
    int fC = C;
    int ans = 0;
    while (true)
    {
        int tmpA = A;
        int tmpB = B;
        int tmpC = C;
        A = tmpB / 2 + tmpC / 2;
        B = tmpC / 2 + tmpA / 2;
        C = tmpA / 2 + tmpB / 2;
        ans++;
        if (A % 2 || B % 2 || C % 2)
        {
            break;
        }
        if (A == fA && B == fB && C == fC)
        {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
}
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int out = INT32_MAX;
    for (int i = 1; i < (N + 1) / 2 + 1; i++)
    {
        int A = i;
        int B = N - i;
        int sum = 0;
        while(A > 0){
            sum += A % 10;
            A /= 10;
        }
        while(B > 0){
            sum += B % 10;
            B /= 10;
        }
        out = min(out, sum);
    }
    cout << out << endl;
}
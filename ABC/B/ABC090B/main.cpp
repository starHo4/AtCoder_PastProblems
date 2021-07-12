#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    int count = 0;
    for (int i = A; i <= B; i++)
    {
        int s = i / 10000 % 10;
        int t = i / 1000 % 10;
        int u = i / 10 % 10;
        int v = i % 10;
        if (s == v && t == u)
        {
            count++;
        }
    }
    cout << count << endl;
}
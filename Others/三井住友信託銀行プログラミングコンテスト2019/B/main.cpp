#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    double tep = N / 1.08;
    for (int i = 0; i < 2; i++)
    {
        tep = (int)tep + i;
        if ((int)(tep * 1.08) == N)
        {
            cout << (int)tep << endl;
            return 0;
        }
        else if ((int)tep * 1.08 != N && i == 1)
        {
            cout << ":(" << endl;
            return 0;
        }
    }
}
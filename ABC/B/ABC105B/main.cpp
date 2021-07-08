#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string out = "No";
    for (int i = 0; i <= 25; i++)
    {
        for (int j = 0; j <= 15; j++)
        {
            if(4 * i + 7 * j == N)
            {
                out = "Yes";
            }
        }
    }
    cout << out << endl;
}
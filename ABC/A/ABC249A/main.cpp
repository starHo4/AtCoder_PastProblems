#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D, E, F, X;
    cin >> A >> B >> C >> D >> E >> F >> X;

    int T_set = A + C;
    int A_set = D + F;
    int T_dist = 0;
    int A_dist = 0;
    T_dist = (A * B) * (X / T_set);
    A_dist = (D * E) * (X / A_set);
    T_dist += ((X % T_set) >= A) ? A * B : B * (X % T_set);
    A_dist += ((X % A_set) >= D) ? D * E : E * (X % A_set);

    if (T_dist > A_dist)
    {
        cout << "Takahashi" << endl;
    }
    else if (T_dist < A_dist)
    {
        cout << "Aoki" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
}
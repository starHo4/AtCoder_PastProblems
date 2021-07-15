#include <iostream>
#include <vector>
using namespace std;
int N = 10;
void fillIsland(vector<vector<char> > &A, vector<vector<bool> > &checked, int i, int j){
    if(i < 0 || i >= N || j < 0 || j >= N){
        return;
    }
    if(A[i][j] == 'x'){
        return;
    }
    if(checked[i][j]) {
        return;
    }
    checked[i][j] = true;
    fillIsland(A, checked, i - 1, j);
    fillIsland(A, checked, i + 1, j);
    fillIsland(A, checked, i, j - 1);
    fillIsland(A, checked, i, j + 1);    
}
bool oneIsland(vector<vector<char> > &A, int i, int j)
{
    vector<vector<bool> > checked(N, vector<bool>(N, false));
    fillIsland(A, checked, i, j);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(A[i][j] == 'o' && !checked[i][j]){
                return false;
            }
        }
    }
    return true;
}
int main()
{
    vector<vector<char> > A(N, vector<char>(N));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A[i][j] == 'o')
            {
                continue;
            }
            A[i][j] = 'o';
            if (oneIsland(A, i, j))
            {
                cout << "YES" << endl;
                return 0;
            }
            A[i][j] = 'x';
        }
    }
    cout << "NO" << endl;
}
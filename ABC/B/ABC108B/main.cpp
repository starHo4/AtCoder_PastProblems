#include <iostream>
using namespace std;
int main(){
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    int vx = x2 - x1;
    int vy = y2 - y1;
    x3 = x2 - vy;
    y3 = y2 + vx;
    x4 = x1 - vy;
    y4 = y1 + vx;
    cout << x3 << " " << y3 << " " << " " << x4 << " " << y4 << endl;
}
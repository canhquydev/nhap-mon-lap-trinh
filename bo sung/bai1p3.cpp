#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float x, y, t, e = M_E;
    cin >> x >> y;
    t = log(x*x + pow(y, 4)) + fabs(y - x) + (pow(x, 6) + pow(y, 7)) / pow(e, x+y);
    cout << t;
    return 0;
}

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    double e, f;
    e = M_E;
    f = (x*x + pow(e,fabs(x)) + pow(sin(x),2)) / pow(x*x + 1, (double)1/5);
    cout << f;
    return 0;
}

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    float x, y, s;
    cin >> x >> y;
    s = 5*cos(3*x + 2) - log(x*x + 2) + sqrt(a*a + b*b) - (fabs(x - y)) / (pow(a, 6) + 1);
    cout << "s = " << s;
    return 0;
}

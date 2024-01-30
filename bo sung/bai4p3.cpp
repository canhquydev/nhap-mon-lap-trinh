#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a, b;
    float x, f, e = M_E;
    cin >> a >> b >> x;
    if(a == 0 && b == 0){
        f = 0;
        cout << "f(a,b,x) = " << 0;
    }
    else if(a + b != 0){
        f = pow(e, x) / (a + b);
        cout << "f(a,b,x) = " << f;
    }
    else{
        f = sqrt(a*a + b*b + 100) + pow(sin(x), 3);
        cout << "f(a,b,x) = " << f;
    }
    return 0;
}

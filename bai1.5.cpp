#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int x, y, x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    x = (x1 + x2 + x3) / 3;
    y = (y1 + y2 + y3) / 3;
    float inter a, b, c;
    inter =  + sqrt(pow(x2 - x, 2) + pow(y2 - y, 2)) + sqrt(pow(x3 - x, 2) + pow(y3 - y, 2));
    cout << inter;
    return 0;
}


#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    float D, M, C;

    D = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    M = fabs(x2-x1) + fabs(y2-y1);

    C = 1 - ((x1*x2 + y1*y2) / (sqrt(x1*x1 + y1*y1) * sqrt(x2*x2 + y2*y2)));

    cout << "D = "  << D << endl;
    cout << "M = "  << M << endl;
    cout << "C = "  << C << endl;
    return 0;
}

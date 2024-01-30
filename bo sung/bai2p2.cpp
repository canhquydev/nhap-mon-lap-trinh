#include <iostream>
using namespace std;
int main(){
    float x, y, z, Max, Min;
    cin >> x >> y >> z;
    Max = (x > y) ? ((x > z) ? x : z ) : ((y > z) ? y : z);
    Min = (x < y) ? ((x < z) ? x : z ) : ((y < z) ? y : z);
    cout << "Max = " << Max << endl;
    cout << "Min = " << Min;
    return 0;
}

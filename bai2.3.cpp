#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float x, s = 0, sum = 0;
    cin >> x;
    int n;
    cin >> n;
    if(n % 2 == 1){
        cout << "s = " << s;
    }
    else{
        for(int i = 2; i <= n; i++){
            sum = sum + (pow(x, i) / pow(3, i - 1));
        }
        s = 2016*x + sum;
        cout << "s = " << s;
    }
    return 0;
}

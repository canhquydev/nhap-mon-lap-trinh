#include <iostream>
using namespace std;
int main(){
    long n, d, t;
    cin >> n >> d;
    if(n < 10 || d < 10000000){
        t = n * 50000;
        cout << t;
    }
    else if((n >= 10 && n <= 20) && (d >= 10000000 && d <= 30000000)){
        t = n * 75000 + d / 100 * 2;
        cout << t;
    }
    else if(n > 20 && (d >= 10000000 && d <= 30000000)){
        t = n * 100000 + d / 100 * 2;
        cout << t;
    }
    else{
        t = n * 100000 + d / 100 * 4;
        cout << t;
    }
    return 0;
}

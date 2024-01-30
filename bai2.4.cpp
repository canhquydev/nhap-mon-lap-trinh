#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n, d = 0, t = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int check  = 0;
        if(i >= 2){
            for(int j = 2; j <= sqrt(i); j++){
                if(i % j == 0){
                    check++;
                }
            }
            if(check == 0){
                d++;
                t += i;
            }
        }
    }
    cout << "tong cac so nguyen to: " << t << endl;
    cout << "co " << d << " so nguyen to";
    return 0;
}

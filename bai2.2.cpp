#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a, b, c, x1, x2, delta;
    cin >> a >> b >> c;
    if(a == 0){
        cout << "phuong trinh khong phai bac 2";
    }
    else{
        delta = b*b - 4*a*c;
        if(delta > 0){
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            cout << "phuong trinh co 2 nghiem phan biet: " << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 ;
        }
        else if(delta == 0){
            cout << "phuong trinh co nghiem kep: x = " << -b / 2*a;
        }
        else{
            cout << "phuong trinh vo nghiem";
        }
    }
    return 0;
}

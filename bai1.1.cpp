/*Bài 1.1. Nhập hai số nguyên a,b; tính tổng, hiệu, tích, thương, đồng dư (phép chia dư %) và in
chúng ra màn hình.*/

#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    float n;
    cin >> n;
    if(n >= 8){
        cout << "xep loai gioi";
    }
    else if(n >= 7 && n < 8){
        cout << "xep loai kha";
    }
    else if(n >= 5 && n < 7){
        cout << "xep loai trung binh";
    }
    else{
        cout << "xep loai kem";
    }
    return 0;
}

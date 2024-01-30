#include <iostream>
using namespace std;
int main(){
    int s;
    cin >> s;
    if(s <= 3000){
        cout << "thoi gian can tim la: " << s;
    }
    else if(s > 3000 && s <= 5000){
        cout << "thoi gian can tim la: " << 3000 + (s - 3000) * 2;
    }
    else if(s > 5000 && s <= 6000){
        cout << "thoi gian can tim la: " << 3000 + 2000 * 2 + (s - 5000) * 3;
    }
    else if(s > 6000){
        cout << "thoi gian can tim la: " << 3000 + 2000 * 2 + 1000 * 3 + (s - 6000) * 5;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n, money;
    cin >> n;
    if(n <= 100){
        money = n * 750;
    }
    else if(n > 100 && n <= 200){
        money = 100*750 + (n - 100) * 1250;
    }
    else if(n > 200 && n <= 300){
        money = 100*750 + 100*1250 + (n - 200)*1750;
    }
    else{
        money = 100*750 + 100*1250 + 100*1750 + (n - 300)*3000;
    }
    cout << money;
    return 0;
}

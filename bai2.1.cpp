#include <iostream>
using namespace std;
int main(){
    int sotien;
    cin >> sotien;
    if(sotien >= 200 && sotien < 300){
        cout << "so tien khuyen mai: " << sotien * 20 / 100;
    }
    else if(sotien >= 300){
        cout << "so tien khuyen mai: " << sotien * 30 / 100;
    }
    else{
        cout << "khong co khuyen mai";
    }
    return 0;
}

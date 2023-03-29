
#include <bits/stdc++.h>

using namespace std;

int main(){

    cout << endl;

    int d, n, g;
    // d*5 + n*3 + g/3 = 100
    // d + n + g = 100
    cout << "Output: " << endl;
    for (int i = 3; i < 100; i = i + 3){
        for (int j = 0; j < 100; j++){
            int z = 100 - i - j;
            if (z <= 0){
                break;
            }
            if(i/3 + j*3 + z*5 == 100){
                cout << "   Trau an dung: " << z << ", trau an nam: " << j << ", trau gia: " << i << endl;
            }
        }
    }
    
    cout << endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, res = 0;

    do {
        cout << "Nhap mot so tu nhien co 3 chu so: " << endl;
        cin >> n;
    }
    while(n >= 1000 || n < 100);
    
    while (n > 0){
        res += n % 10;
        n /= 10;
    }

    cout << "Output: " << res << endl; 
    
    return 0;
}
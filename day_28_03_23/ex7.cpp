
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, res = 0;

    cin >> n;

    while (n > 0){
        res += n % 10;
        n /= 10;
    }

    cout << "Output: " << res << endl; 
    
    return 0;
}
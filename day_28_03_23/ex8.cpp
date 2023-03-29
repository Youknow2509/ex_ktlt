
#include <bits/stdc++.h>

using namespace std;

bool solve(int n){
    int temp = n,
        sum = 0;
    while (temp > 0)
    {
        sum += (temp % 10)*(temp % 10)*(temp % 10);
        temp /= 10;
    }
    return sum == n;
}

int main(){

    int n, res = 0;

    do {
        cout << "Nhap mot so tu nhien co 3 chu so: " << endl;
        cin >> n;
    }
    while(n >= 1000 || n < 100);
    
    if (solve(n)){
        cout << "So: " << n << " la so Armstrong" << endl;
    }
    else{
        cout << "So: " << n << " khong la so Armstrong" << endl;
    }
    
    return 0;
}
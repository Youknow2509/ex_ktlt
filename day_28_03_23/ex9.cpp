
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

    cout << "Tat ca cac so Armstrong co 3 chu so la: " << endl;
    for (int i = 100; i < 1000; i++){
        if (solve(i)){
            cout << i << endl;
        }
    }
    
    return 0;
}
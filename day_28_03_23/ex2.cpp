
#include <bits/stdc++.h>

using namespace std;

long long pow(int a, int b){
    if ( b == 0)
        return 1;
    return a*pow(a, b - 1);
}

long long gt(int n){
    if (n == 0 || n == 1) 
        return 1;
    return n*gt(n-1);
}

long long solve(int n){
    long long res = 0;
    for (int i = 1; i <= n; i++){
        res += pow(-1, i)*gt(i);
    }
    return res;
}

int main(){

    int n;
    
    cin >> n;

    cout << "Output: " << solve(n) << endl;

    return 0;
}
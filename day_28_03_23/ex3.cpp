
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

long long solve(int x, int n){
    long long res = 0;
    for (int i = 0; i <= n; i++){
        res += pow(-1, i - 1)*pow(x, 2*i + 1)/gt(2*i+1);
    }
    return res;
}

int main(){

    int x, n;
    
    cin >> x >> n;

    cout << "Output: " << solve(x, n) << endl;

    return 0;
}
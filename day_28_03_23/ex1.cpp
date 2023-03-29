
#include <bits/stdc++.h>

using namespace std;

long long gt(int n){
    if (n == 0 || n == 1) 
        return 1;
    return n*gt(n-1);
}

long long solve(int n){
    long long res = 0;
    for (int i = 1; i <= n; i++){
        res += gt(i);
    }
    return res;
}
int main(){

    int n;
    
    cin >> n;

    cout << "Output: " << gt(n) << endl;

    return 0;
}
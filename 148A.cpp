#include <bits/stdc++.h>
using namespace std;
long long lcmll(long long a, long long b){ return a / std::gcd(a,b) * b; }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long k,l,m,n,d; 
    cin >> k >> l >> m >> n >> d;

    if (k==1 || l==1 || m==1 || n==1) { cout << d << "\n"; return 0; }

    auto C = [&](long long x){ return d / x; };

    long long a = C(k) + C(l) + C(m) + C(n);
    long long b = C(lcmll(k,l)) + C(lcmll(k,m)) + C(lcmll(k,n))
                + C(lcmll(l,m)) + C(lcmll(l,n)) + C(lcmll(m,n));
    long long c = C(lcmll(lcmll(k,l),m)) + C(lcmll(lcmll(k,l),n))
                + C(lcmll(lcmll(k,m),n)) + C(lcmll(lcmll(l,m),n));
    long long d4 = C(lcmll(lcmll(k,l), lcmll(m,n)));

    cout << (a - b + c - d4) << "\n";
    return 0;
}
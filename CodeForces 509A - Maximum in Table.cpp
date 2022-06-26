//https://codeforces.com/problemset/problem/509/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

ll factorial(ll n) {
    ll factorial = 1;
    for (ll i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    cout<<factorial(2*(n-1))/(factorial(n-1)*factorial(n-1))<<endl;

    return 0;
}

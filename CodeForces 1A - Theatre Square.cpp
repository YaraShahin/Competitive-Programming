//https://codeforces.com/problemset/problem/1/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, a, x, y;
    cin>>n>>m>>a;
    cout<<(((n+a-1)/a)*((m+a-1)/a))<<endl;

    return 0;
}

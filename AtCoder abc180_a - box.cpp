//https://atcoder.jp/contests/abc180/tasks/abc180_a
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    ll a;
    ll b;
    ll res;

    cin>>n>>a>>b;
    res = n-a+b;
    cout<<res<<endl;



    return 0;
}

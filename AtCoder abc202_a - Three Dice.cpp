//https://atcoder.jp/contests/abc202/tasks/abc202_a
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a;
    ll b;
    ll c;
    ll res;

    cin>>a>>b>>c;
    res = (7-a)+(7-b)+(7-c);
    cout<<res<<endl;



    return 0;
}

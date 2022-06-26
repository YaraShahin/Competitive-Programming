//https://atcoder.jp/contests/abc137/tasks/abc137_a?lang=en
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

    cin>>a>>b;
    cout<<max({a+b, a-b, a*b})<<endl;

    return 0;
}

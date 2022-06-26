//https://atcoder.jp/contests/abc212/tasks/abc212_a?lang=en
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

    if(a==0) cout<<"Silver"<<endl;
    else if (b==0) cout<<"Gold"<<endl;
    else cout<<"Alloy"<<endl;

    return 0;
}

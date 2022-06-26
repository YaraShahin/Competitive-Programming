//https://atcoder.jp/contests/abc191/tasks/abc191_a?lang=en
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll v, t, s, d;
    cin>>v>>t>>s>>d;

    if((d<v*t) or (d>v*s)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;



    return 0;
}

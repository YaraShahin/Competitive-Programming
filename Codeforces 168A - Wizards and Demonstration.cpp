//https://codeforces.com/contest/168/problem/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, w, p;
    cin>>n>>w>>p;
    ll mn = ceil(double(p)/100*(n));
    if(mn-w<0) cout<<0;
    else cout<<mn-w;



    return 0;
}

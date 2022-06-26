//https://codeforces.com/problemset/problem/4/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll w;
    cin>>w;

    if(w%2==0 and w>2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}

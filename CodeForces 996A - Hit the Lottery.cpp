//https://codeforces.com/problemset/problem/996/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x;
    ll res = 0;
    ll temp;

    cin>>x;
    temp = x/100;
    res += temp;
    x -= temp*100;

    temp = x/20;
    res += temp;
    x -= temp*20;

    temp = x/10;
    res+=temp;
    x-=temp*10;

    temp=x/5;
    res+=temp;
    x-=temp*5;

    res+=x;

    cout<<res<<endl;



    return 0;
}

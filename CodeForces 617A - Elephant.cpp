//https://codeforces.com/problemset/problem/617/A
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
    temp = x/5;
    res += temp;
    x -= temp*5;

    temp = x/4;
    res += temp;
    x -= temp*4;

    temp = x/3;
    res+=temp;
    x-=temp*3;

    temp=x/2;
    res+=temp;
    x-=temp*2;

    res+=x;

    cout<<res<<endl;



    return 0;
}

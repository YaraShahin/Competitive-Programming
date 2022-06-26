//https://codeforces.com/contest/677/problem/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, h, f, ans=0;
    cin>>n>>h;

    while(n--){
        cin>>f;
        if(f>h) ans+=2;
        else ans++;
    }
    cout<<ans<<endl;



    return 0;
}

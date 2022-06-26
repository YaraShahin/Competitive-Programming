//https://codeforces.com/problemset/problem/231/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z;
    ll n, ans = 0;
    cin>>n;

    while(n--){
        cin>>x>>y>>z;
        if (x+y+z>=2) ans++;
    }

    cout<<ans<<endl;


    return 0;
}

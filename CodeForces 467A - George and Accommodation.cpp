//https://vjudge.net/contest/488807#problem/C
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, p, q, ans = 0;
    cin>>n;

    for (int i = 0; i<n; i++){
        cin>>p>>q;
        if(q-p>=2) ans++;
    }

    cout<<ans<<endl;



    return 0;
}

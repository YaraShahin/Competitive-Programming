//https://codeforces.com/contest/1661/problem/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll b[n];
        ll ans = 0;
        for(int i = 0; i<n; i++) cin>>a[i];
        for(int i = 0; i<n; i++) cin>>b[i];
        for(int i = 0; i<n-1; i++){
            if (abs(a[i]-a[i+1])+abs(b[i]-b[i+1])<=abs(a[i]-b[i+1])+abs(b[i]-a[i+1])) ans += abs(a[i]-a[i+1])+abs(b[i]-b[i+1]);
            else{
                ans += abs(a[i]-b[i+1])+abs(b[i]-a[i+1]);
                ll temp = a[i+1];
                a[i+1] = b[i+1];
                b[i+1] = temp;
            }
            }
        cout<<ans<<endl;
        }

    return 0;
}

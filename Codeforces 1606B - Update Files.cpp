//https://codeforces.com/contest/1606/problem/B
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    ll n, k;

    while(t--){
        cin>>n>>k;
        ll hours = 0;
        ll computers_updated = 1;
        while (computers_updated<n && computers_updated<k){
            computers_updated += computers_updated;
            hours++;
        }
        hours+=((n-computers_updated)+k-1)/k;
        cout<<hours<<endl;
    }

    return 0;
}

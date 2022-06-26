//https://codeforces.com/problemset/problem/38/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, mn, mx, ans = 0;
    cin>>n;
    int ranks[n];
    for(int i = 1; i<n; i++) cin>>ranks[i];
    cin>>mn>>mx;
    for(int i = mn; i<mx; i++) ans+=ranks[i];
    cout<<ans<<endl;

    return 0;
}

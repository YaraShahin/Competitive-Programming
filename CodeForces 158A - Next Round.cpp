//https://codeforces.com/problemset/problem/158/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, x, ans=0, c;
    cin>>n>>k;
    for(int i = 0; i<k; i++){
        cin>>c;
        if(c>0)ans++;
    }
    for(int i=0; i<n-k; i++){
        cin>>x;
        if(x==c and x>0) ans++;
    }

    cout<<ans<<endl;

    return 0;
}

//https://codeforces.com/problemset/problem/282/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, ans = 0;
    cin>>n;
    string s;

    for (int i = 0; i<n; i++){
        cin>>s;
        if(s[0]=='+' or s[2]=='+') ans ++;
        else ans--;
    }

    cout<<ans<<endl;


    return 0;
}

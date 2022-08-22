//https://codeforces.com/problemset/problem/281/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    string ans = "";
    ans += toupper((char) s[0]);
    ans += s.substr(1);
    cout<<ans<<endl;

    return 0;
}

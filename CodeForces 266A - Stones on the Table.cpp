//https://codeforces.com/problemset/problem/266/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 0;
    for (int i = 1; i<n; i++){
        if(s[i]==s[i-1])ans++;
    }
    cout<<ans;

    return 0;
}

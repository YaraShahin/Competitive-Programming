//https://codeforces.com/problemset/problem/520/A
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
    set<int> chars;
    for(int i = 0; i<n; i++){
        chars.insert(int(tolower(char(s[i]))));
    }
    if(chars.size()==26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}

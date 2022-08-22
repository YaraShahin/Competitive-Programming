//https://codeforces.com/problemset/problem/71/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        if(s.size()<=10) cout<<s<<endl;
        else cout<<s[0]<<to_string(s.size()-2)<<s[s.size()-1]<<endl;
    }

    return 0;
}

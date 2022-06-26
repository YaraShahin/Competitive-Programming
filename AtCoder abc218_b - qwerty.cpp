//https://atcoder.jp/contests/abc218/tasks/abc218_b?lang=en
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string ans="";
    for(int i=0; i<26; i++){
        cin>>n;
        ans+=char(n+96);
    }
    cout<<ans<<endl;



    return 0;
}

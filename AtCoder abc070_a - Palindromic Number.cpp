//https://atcoder.jp/contests/abc070/tasks/abc070_a?lang=en
#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string s;
    s = to_string(n);

    if (s[0]==s[2]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}

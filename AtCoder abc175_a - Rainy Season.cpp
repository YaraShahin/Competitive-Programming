//https://atcoder.jp/contests/abc175/tasks/abc175_a?lang=en
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

    if (s=="RRS" or s=="SRR") cout<<2<<endl;
    else if (s=="RRR") cout<<3<<endl;
    else if (s=="SSS") cout<<0<<endl;
    else cout<<1<<endl;



    return 0;
}

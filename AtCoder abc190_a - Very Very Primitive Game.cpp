//https://atcoder.jp/contests/abc190/tasks/abc190_a?lang=en
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, c;
    cin>>a>>b>>c;

    if (a>b) cout<<"Takahashi"<<endl;
    else if (a<b) cout<<"Aoki"<<endl;
    else if (c==0) cout<<"Aoki"<<endl;
    else cout<<"Takahashi"<<endl;



    return 0;
}

//https://atcoder.jp/contests/abc219/tasks/abc219_a?lang=en
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x;
    cin>>x;

    if(x<40) cout<<40-x<<endl;
    else if (x<70) cout<<70-x<<endl;
    else if (x<90) cout<<90-x<<endl;
    else cout<<"expert"<<endl;

    return 0;
}

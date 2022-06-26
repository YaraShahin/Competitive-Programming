//https://atcoder.jp/contests/abc096/tasks/abc096_a?lang=en
#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
//typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, d;
    cin>>m>>d;

    if (d<m) cout<<m-1<<endl;
    else cout<<m<<endl;

    return 0;
}

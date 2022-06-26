//https://codeforces.com/problemset/problem/591/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double l;
    double p;
    double q;
    double res;

    cin>>l>>p>>q;
    res = (l/(p+q))*p;

    cout<<res<<endl;



    return 0;
}

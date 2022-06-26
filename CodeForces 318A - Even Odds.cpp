//https://codeforces.com/problemset/problem/318/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k, odd;
    cin>>n>>k;

    if (n%2==0){
        if(k<=n/2) cout<<(k-1)*2+1<<endl;
        else cout<<(k-n/2)*2<<endl;
    }
    else{
        if(k<=(n/2)+1) cout<<(k-1)*2+1<<endl;
        else cout<<(k-(n/2+1))*2<<endl;
    }



    return 0;
}

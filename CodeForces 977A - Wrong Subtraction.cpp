//https://codeforces.com/problemset/problem/977/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin>>n>>k;

    while(k--){
        if(n%10==0) n/=10;
        else n--;
    }
    cout<<n<<endl;

    return 0;
}

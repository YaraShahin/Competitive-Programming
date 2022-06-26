//https://codeforces.com/problemset/problem/492/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, i=0;
    cin>>n;

    while((n-((i+1)*(i+2))/2)>=0){
        n-=((i+1)*(i+2))/2;
        i++;
    }

    cout<<i<<endl;

    return 0;
}

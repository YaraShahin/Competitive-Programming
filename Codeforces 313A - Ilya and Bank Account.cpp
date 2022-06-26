//https://codeforces.com/contest/313/problem/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, last, second;
    cin>>n;

    if (n>=0) cout<<n;
    else{
        last = abs(n%10);
        n/=10;
        second = abs(n%10);
        n/=10;
        if(second>last) cout<<n*10-last;
        else cout<<n*10-second;
    }


    return 0;
}

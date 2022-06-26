//https://codeforces.com/problemset/problem/758/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, mx=0, ans = 0;
    cin>>n;

    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>mx) mx=arr[i];
    }

    for (int i = 0; i<n; i++) ans+=mx-arr[i];

    cout<<ans<<endl;


    return 0;
}

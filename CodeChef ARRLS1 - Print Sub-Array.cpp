//https://www.codechef.com/problems/ARRLS1
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, mn, mx;
    cin>>n;

    int arr[n];

    for(int i =0; i<n; i++) cin>>arr[i];
    cin>>mn>>mx;

    for (int i = mn-1; i<mx; i++) cout<<arr[i]<<endl;

    return 0;
}

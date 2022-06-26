//https://codeforces.com/problemset/problem/144/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, mx = -1, mn = 101, mni = -1, mxi = 101;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>mx) mx = arr[i];
        if(arr[i]<mn) mn = arr[i];
    }
    for(int i = 0; i<n; i++){
        if(arr[i]==mx and i<mxi) mxi = i;
        if(arr[i]==mn and i>mni) mni = i;
    }
    if(mni>mxi) cout<<mxi+n-mni-1<<endl;
    else cout<<mxi+n-mni-2<<endl;


    return 0;
}

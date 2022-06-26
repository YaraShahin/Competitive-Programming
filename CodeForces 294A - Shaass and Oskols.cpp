//https://codeforces.com/problemset/problem/294/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, x, y, right, left;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) cin>>arr[i];
    cin>>m;
    while(m--){
        cin>>x>>y;
        left = y-1;
        right = arr[x-1]-y;
        arr[x-1] = 0;
        if(x<n) arr[x]+=right;
        if(x>1) arr[x-2]+=left;
    }
    for(int i = 0; i<n; i++) cout<<arr[i]<<endl;
    return 0;
}

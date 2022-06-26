//https://codeforces.com/problemset/problem/1213/B
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n, mn = 1000001, ans = 0;
        cin>>n;
        int arr[n];
        for(int i =0; i<n; i++) cin>>arr[i];
        for(int i = n-1; i>=0; i--){
            if(arr[i]>mn) ans++;
            else mn = arr[i];
        }

        cout<<ans<<endl;
    }

    return 0;
}

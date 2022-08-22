//https://codeforces.com/problemset/problem/365/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    int t, k, n;
    cin>>t>>k;
    int ans = 0;
    while(t--){
        set <int> nums;
        cin>>n;
        while(n>0){
            int digit = n%10;
            if(digit<=k) nums.insert(digit);
            n/=10;
        }
        if(nums.size()==k+1) ans++;
    }
    cout<<ans<<endl;

    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string arr[n];
    bool flag = true;
    ll cnt = 0;

    for(int i =0; i<n; i++) cin>>arr[i];

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i>0 and arr[i-1][j] =='o') cnt++;
            if(i<n-1 and arr[i+1][j] =='o') cnt++;
            if(j<n-1 and arr[i][j+1] =='o') cnt++;
            if(j>0 and arr[i][j-1] =='o') cnt++;
            if(cnt%2!=0) flag = false;
        }
    }

    if(flag) cout<<"YES";
    else cout<<"NO";



    return 0;
}

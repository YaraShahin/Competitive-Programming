//https://vjudge.net/problem/UVA-591/origin
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, j = 0;
    while(true){
        cin>>n;
        if(n==0) break;
        j++;
        int arr[n];
        ll sm = 0;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            sm+=arr[i];
        }
        int av = sm/n;
        ll res = 0;
        for(int i = 0; i<n; i++) if(arr[i]>av) res+=arr[i]-av;
        cout<<"Set #"<<j<<endl;
        cout<<"The minimum number of moves is "<<res<<"."<<endl;
        cout<<endl;
    }
    return 0;
}

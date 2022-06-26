//https://codeforces.com/problemset/problem/1353/B
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        int n, k, temp, ans = 0;
        cin>>n>>k;
        vector <int> a;
        vector <int> b;

        for(int i = 0; i<n; i++){
            cin>>temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());

        for(int i = 0; i<n; i++){
            cin>>temp;
            b.push_back(temp);
        }
        sort(b.begin(), b.end());

        for(int i = 0; i<k; i++){
            if(!b.empty()){
                if(a[i]<b[n-i-1]) a[i]=b[n-i-1];
            }
        }

        for(int i = 0; i<a.size(); i++) ans+=a[i];

        cout<<ans<<endl;
    }


    return 0;
}

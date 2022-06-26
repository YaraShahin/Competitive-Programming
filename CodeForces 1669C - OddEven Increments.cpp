//https://codeforces.com/contest/1669/problem/C
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n1, n2, n, temp;
    cin>>t;

    while(t--){
        cin>>n;
        cin>>n1;
        int m1 = n1%2;
        cin>>n2;
        int m2 = n2%2;
        bool f1 = true;
        bool f2 = true;
        for(int i = 2; i<n; i++){
            cin>>temp;
            if((i%2==0)and(temp%2!=m1)) f1 = false;
            else if(i%2==1 and temp%2!=m2) f2 = false;
        }
        if(f1 and f2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}

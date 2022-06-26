//https://codeforces.com/problemset/problem/344/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans=1;
    cin>>n;
    string s, last;

    cin>>last;
    n--;

    while(n--){
        cin>>s;
        if(s!=last) ans++;
        last = s;
    }

    cout<<ans<<endl;

    return 0;
}

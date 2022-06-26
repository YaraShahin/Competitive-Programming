//https://codeforces.com/problemset/problem/158/B
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k, ones = 0, twos = 0, ans = 0;
    cin>>n;

    while(n--){
        cin>>k;
        if(k==1) ones++;
        else if(k==2) twos++;
        else if(k==3){
            ans++;
            ones--;
        }
        else ans++;
    }

    if(twos%2==0) ans+=twos/2;
    else{
        ans+=(twos/2)+1;
        ones-=2;
    }

    if(ones>0){
        if(ones%4==0) ans+=ones/4;
        else ans+= (ones/4)+1;
    }

    cout<<ans<<endl;


    return 0;
}

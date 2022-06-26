//https://codeforces.com/problemset/problem/122/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    int numbers[14] = {4, 7, 47, 74, 44, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for (int i = 0; i<14; i++){
        if(n%numbers[i]==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
    return 0;
}

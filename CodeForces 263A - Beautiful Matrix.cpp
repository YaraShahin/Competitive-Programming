//https://codeforces.com/problemset/problem/263/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, res=0;

    for(int i = 1; i<6; i++){
        for (int j = 1; j<6; j++){
            cin>>k;
            if(k==1) res = abs(3-i)+abs(3-j);
        }
    }

    cout<<res<<endl;



    return 0;
}

//https://atcoder.jp/contests/abc121/tasks/abc121_a
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int H, W, h, w;
    cin>>H>>W>>h>>w;
    cout<<H*W-(h*W+w*H-h*w)<<endl;


    return 0;
}

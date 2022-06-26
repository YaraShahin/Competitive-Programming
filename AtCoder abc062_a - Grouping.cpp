//https://atcoder.jp/contests/abc062/tasks/abc062_a
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a1[7] = {1,3,5,7,8,10,12};
    int a2[4] = {4,6,9,11};

    int x, y;
    cin>>x>>y;
    if (x==2 or y==2) cout<<"No";
    else{
        if((find(begin(a1),end(a1), x)!=end(a1) and find(begin(a1),end(a1), y)!=end(a1)) or (find(begin(a2),end(a2), x)!=end(a2) and find(begin(a2),end(a2), y)!=end(a2))) cout<<"Yes";
        else cout<<"No";
    }



    return 0;
}

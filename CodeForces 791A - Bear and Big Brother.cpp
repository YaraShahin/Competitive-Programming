//https://codeforces.com/problemset/problem/791/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int log(int a, int b)
{
    return log2(a) / log2(b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, n=0;
    cin>>a>>b;

    while(++n){
        a = a*3;
        b = b*2;
        if (a>b){
            cout<<n<<endl;
            break;
        }
    }
    return 0;
}

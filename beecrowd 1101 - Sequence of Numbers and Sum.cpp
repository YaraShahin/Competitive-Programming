//https://www.beecrowd.com.br/judge/en/problems/view/1101
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    while(true){
        cin>>m>>n;
        if(n<=0 | m<=0) break;
        int summation = 0;
        if (n<=m){
            for (int i = n; i<=m; i++){
                cout<<i<<" ";
                summation+=i;
            }
            cout<<"Sum="<<summation<<endl;
        }
        else{
            for (int i = m; i<=n; i++){
                cout<<i<<" ";
                summation+=i;
            }
            cout<<"Sum="<<summation<<endl;
        }
    }

    return 0;
}

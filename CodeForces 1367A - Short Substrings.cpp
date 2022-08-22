//https://codeforces.com/problemset/problem/1367/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        cout<<s[0];
        for(int i = 1; i<s.size()-1; i+=2){
            cout<<s[i];
        }
        cout<<s[s.size()-1]<<endl;
    }



    return 0;
}

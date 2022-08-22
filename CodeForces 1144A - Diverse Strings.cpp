//https://codeforces.com/problemset/problem/1144/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    int t, n;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int mn = 200;
        int mx = 90;
        set <int> chars;
        for (int i = 0; i<s.size(); i++){
            n = int(char(s[i]));
            chars.insert(n);
            if(n>mx) mx = n;
            if(n<mn) mn = n;
        }
        //cout<<chars.size()<<" "<<s.size()<<" "<<mx<<" "<<mn<<" "<<endl;
        if(chars.size()==s.size() && mx-mn+1 == s.size()) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}

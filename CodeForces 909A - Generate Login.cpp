#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin>>s1>>s2;
    string ans = "";
    ans+=s1[0];

    for(int i = 1; i<s1.size(); i++){
            if(s1[i]<s2[0]) ans+=s1[i];
            else break;
    }
    ans+=s2[0];
    cout<<ans;


    return 0;
}

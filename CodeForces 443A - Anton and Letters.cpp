//https://codeforces.com/problemset/problem/443/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    string s;
    cin>>s;

    //in case no characters {}
    if(s[1]=='}'){
        cout<<0<<endl;
        return 0;
    }
    //in case one character {-}
    if(s[2]=='}'){
        cout<<1<<endl;
        return 0;
    }
    //more than one character {-, -}
    set <int> chars;
    chars.insert(int(s[1]));

    while(true){
        cin>>s;
        chars.insert(int(s[0]));
        if(s[1]=='}') break;
    }
    cout<<chars.size()<<endl;

    return 0;
}

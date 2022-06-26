//https://atcoder.jp/contests/abc049/tasks/abc049_a?lang=en
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c;
    cin>>c;

    if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u') cout<<"vowel"<<endl;
    else cout<<"consonant"<<endl;



    return 0;
}

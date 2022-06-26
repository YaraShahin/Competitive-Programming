//https://codeforces.com/contest/705/problem/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string answer = "";

    for(int i = 1; i<=n; i++){
        if(i!=1) answer+="that ";
        if(i%2==0) answer += "I love ";
        else answer += "I hate ";
    }
    answer+="it";
    cout<<answer;

    return 0;
}

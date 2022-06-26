//https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map <int, string> numbers = {{1, "one"},{2, "two"},{3, "three"},{4, "four"},{5, "five"},{6, "six"},{7, "seven"},{8, "eight"},{9, "nine"}};

    ll n;
    cin>>n;

    if(n<=9) cout<<numbers.find(n)->second<<endl;
    else cout<<"Greater than 9"<<endl;


    return 0;
}

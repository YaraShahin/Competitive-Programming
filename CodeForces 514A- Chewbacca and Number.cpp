//https://codeforces.com/problemset/problem/514/A
#include <iostream>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ll n;
    cin>>n;
    string ans = "";
    string s = "";

    while(n>0){
        if (n==9){
            ans+=to_string(n);
            break;
        }
        int digit = n%10;
        n/=10;
        if(digit>4) ans+=to_string(9-digit);
        else ans+=to_string(digit);
    }
    for(int i = ans.size()-1; i>=0; i--) s+=ans[i];
    cout<<s<<endl;

    return 0;
}

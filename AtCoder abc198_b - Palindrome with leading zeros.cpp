//https://atcoder.jp/contests/abc198/tasks/abc198_b
#include <iostream>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    int n;
    cin>>n;
    string s = to_string(n);
    int sz = s.size();
    for(int i = sz-1; i>=0; i--){
        if(s[i]!='0'){
            sz = i+1;
            break;
        }
    }
    for(int i = sz-1; i>=sz/2; i--){
            //cout<<">> "<<s[i]<<endl;
            //cout<<i<<" "<<(sz/2)-(i-(sz/2))-1<<endl;
            if((sz%2==0 && s[i]!=s[(sz/2)-(i-(sz/2))-1]) || (sz%2!=0 && s[i]!=s[(sz/2)-(i-(sz/2))])){
                cout<<"No"<<endl;
                return 0;
            }
    }
    cout<<"Yes";

    return 0;
}

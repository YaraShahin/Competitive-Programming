#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int tot = 0;
        bool flag = false;
        for (int i = 0; i<s.size(); i++){
            if(s.at(i)=='A'){
                tot++;
            }
            else{
                tot--;
                if(tot<0) flag = true;
            }
        }
        if(s.at(s.size()-1)=='A' or flag) cout<<"NO"<<endl;
        else cout<<"YES "<<endl;
    }



    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string invert(string s){
    string rev = "";
    for(int i = s.size()-1; i>=0; i--) rev+=s[i];
    return rev;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s, f;
        bool flag = false;
        cin>>s>>f;
        if (s.find(f)!=string::npos || s.find(invert(f))!= string::npos){
            flag = true;
            cout<<"YES"<<endl;
        }
        for(int i = 1; i<f.size() && !flag; i++){
            string inv = invert(f.substr(i));
            string right_segment = f.substr(0, i);
            int right_index = s.find(right_segment);
            bool inner_flag = true;
            int n = inv.size();
            while(right_index!=string::npos){
                int start_pos = right_index+i-1-n;
                if (start_pos>=0 && start_pos<s.size()-n && inv==s.substr(start_pos, n)){
                    flag = true;
                    inner_flag = false;
                    cout<<"YES"<<endl;
                    break;
                }
                right_index = s.find(right_segment, right_index+1);
            }
            if (!inner_flag) break;
        }
        if (!flag) cout<<"NO"<<endl;
    }

    return 0;
}

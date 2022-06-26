//https://codeforces.com/contest/1665/problem/B
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    int t, num;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        map<int, int> nums;
        map<int, int>::iterator it;
        ll mx_reps = 1;

        for(int i = 0; i<n; i++){
            scanf("%d", &num);
            it = nums.find(num);
            if(it!= nums.end()){
                it->second++;
                if (it->second > mx_reps) mx_reps=it->second;
            }
            else nums.insert({num, 1});
        }
        ll answer = (n-mx_reps) + ceil(log2(double(n)/double(mx_reps)));
        cout<<answer<<endl;
    }



    return 0;
}

//https://codeforces.com/problemset/problem/275/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    bool arr[5][5] = {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
    for(int i = 1; i<4; i++){
        for(int j = 1; j<4; j++){
            cin>>n;
            n=n%2;
            if(n!=0){
                for(int k = i-1; k<=i+1; k++){
                    for(int m=j-1; m<=j+1; m++){
                        if (k==i or m==j){
                        if(arr[k][m]==0) arr[k][m]=1;
                        else arr[k][m]=0;
                        }
                    }
                }
            }
        }
    }
    for(int i = 1; i<4; i++){
        for(int j = 1; j<4; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }


    return 0;
}

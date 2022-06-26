//https://www.beecrowd.com.br/judge/en/problems/view/1036
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b, c;
    cin>>a>>b>>c;
    double det = (b*b)-(4*a*c);

    if(det<0 or 2*a==0) cout<<"Impossivel calcular"<<endl;
    else{
        cout<<"R1 = "<<(-1*b+sqrt(det))/(2*a)<<endl;
        cout<<"R2 = "<<(-1*b-sqrt(det))/(2*a)<<endl;
    }



    return 0;
}

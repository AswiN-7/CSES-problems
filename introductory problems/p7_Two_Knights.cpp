#include<iostream>

#define ll long long int

using namespace std;

int main(){
    ll N;
    cin >> N;

    for(ll n=1;n<=N;n++){
        ll totalPostions = (n*n) * (n*n-1) / 2;
        ll attackPOsitions = 4*(n-1)*(n-2);
        cout<< totalPostions-attackPOsitions<<endl;
    }


    return 0;
}
#include<iostream>
using namespace std;

int main(){
    unsigned long long num, expo=1;
    
    cin>>num;
    for(int i=0;i<num;i++){
        expo*=2;
        expo%=1000000007;
    }
    cout<<expo;
    // expo%=;
    // cout<<expo;
    return 0;
}
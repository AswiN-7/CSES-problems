#include<iostream>

using namespace std;

int main(){
    int num, count=0;
    cin>>num;
    for(int i=5;num/i>=1;i*=5){
        count+=num/i;
    }
    cout<<count;
    return 0;
}
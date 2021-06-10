#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printarr(vector<long long int> v){
    cout<<v.size()<<endl;
    for(int i= 0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

int main(){
    long long int num;
    long long int total=0;
    cin >>num;
    total = (num*(num+1))/2;
    if(total%2!=0){
        cout<<"NO";
    }
    else{
        vector<long long int> a, b;
        long long int ans = total/2;
        for(int i=num;i>0;i--){
            if(i<=ans){
                a.push_back(i);
                ans-= i;
            }
            else{
                b.push_back(i);
            }
        }    
        cout<<"YES"<<endl;
        printarr(a);
        printarr(b);
}
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string getPalindrome(string str){
    unordered_map<char, int> hmap;
    int odd_count=0;
    char odd_char;
    string p1, p2;
    for(int i=0;i<str.length();i++)
        hmap[str[i]]++;
    for (auto c:hmap){
        if(c.second%2!=0){
            odd_count++;
            odd_char = c.first;
        }
    }
    if((odd_count>1)||(odd_count==1&&str.length()%2==0))
        return "NO PALINDROME";

    for(auto c:hmap){
        string s (c.second/2, c.first);
        p1 = p1+s;
        p2 = s+p2;
    }

    return (odd_count==1)?(p1+odd_char+p2):(p1+p2);
}


int main(){

    string inp_str;
    cin>>inp_str;

    cout<<getPalindrome(inp_str)<<endl;

    
    return 0;
}
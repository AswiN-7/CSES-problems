#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int max_count=0;
    int current=1;
    for(int i=1;i<str.length();i++){
        if(str[i-1]==str[i]){
            current++;
        }
        else{
            if(max_count<current){
                max_count = current;

            }   
            current=1;
        }
    }
    if(max_count<current)
        max_count = current;
    cout << max_count;
    return 0;
}
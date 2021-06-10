#include<iostream>

using namespace std;


int main(){
    long long row, column;
    int t;
    cin >> t;
    long long temp;
    for(int ii=0;ii<t;ii++){
        cin>>row>>column;
        long long num;
        num=row*row;
        num-=row-1;

        if(column<=row){
            temp = row-column;
            if(row%2==0)
                num+=temp;  
            else
                num-=temp;
            cout<<num<<endl;
        }
        else{
            num = column*column;
            num-=column-1;
            temp = column-row;
            if(column%2==0){
                num-=temp;
            }
            else{   
                num+=temp;
            }
            cout<<num<<endl;
        }
    }
    
    


}
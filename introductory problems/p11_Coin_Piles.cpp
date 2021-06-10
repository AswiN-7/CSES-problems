#include<iostream>

using namespace std;

int main(){
    int num, large, small;
    cin>>num;
    for(int i=0;i<num;i++){
        cin >>large>>small;
        if(large<small) swap(large, small);
        if(large>2*small){
                cout<<"NO"<<endl;
        }
        else{
            large%=3;
            small%=3;
            if(large<small) swap(large, small);
            if((large==2&&small==1)||(large==small&&large==0)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
            
        }
    return 0;
}
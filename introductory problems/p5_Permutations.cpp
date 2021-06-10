#include<iostream>
using namespace std;


void printarr(int arr[], int size){
    for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
    }
    cout<<endl;
}




int main(){
    int size;
    cin>>size;
    if(size>1 && size<4)
        cout<<"NO SOLUTION\n";
    else{
        int res;
        int arrp[size]={0};
        int strat=0, mid = size/2;

        for(int i=0;i<size;i+=2){
            arrp[i] = ++mid;
            arrp[i+1] = ++strat;
        }
        printarr(arrp, size);
    }
    
    
    
    
    return 0;
}


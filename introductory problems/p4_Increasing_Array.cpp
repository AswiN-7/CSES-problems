#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int process;
    printf("1 -encode\n2 -decode\nwhat u what to do : ");
        scanf("%d", &process);

    char msg[100];
    printf("enter message : ");
        scanf("%s", msg);

    if(process==1){
        for(int i=0;i<strlen(msg);i++){
            int temp = int(msg[i]);
                temp+=3;
            msg[i] = char(temp);
            cout << msg[i];
        }
    }
    else{
        for(int i=0;i<strlen(msg);i++){
            int temp = int(msg[i]);
                temp-=3;
            msg[i] = char(temp);
            cout << msg[i];
        }
    }
}
#include<stdio.h>
int main(){
    for(int x=2;x<1000;x++){
            int flag=1;
        for(int i=2;i<x;i++){
            if(x%i==0){
                flag=0;
                break;
            }
        }
               if(flag==1){
            printf("%d\n",x);
        }
    }
return 0;
}
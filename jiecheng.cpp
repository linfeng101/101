int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
#include<stdio.h>
int main(){
    printf("%d",fact(5));
    return 0;
}
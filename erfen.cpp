//void search(int x){
//while(r-j>=1){
//        int i=(j+r)/2;
//        if(a[i]=t){
//            return ture;
//        }
//       else if(a[i]>t){
//            r=i;
//        }
//        else{
//            j=i+1;
//        }
//    }
//return false;
//}
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j=0,r=n;
    int t=1;
    while(r-1>=1){
        int i=(j+r)/2;
        if(a[i]=t){
            printf("yes");
            break;
        }
        else if(a[i]>t){
            r=i;
        }
        else{
            j=i+1;
        }
    }
    return 0;
}
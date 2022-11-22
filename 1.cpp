#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
    int ans =0;
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int len=a[i]+a[j]+a[k];
                int M=max(a[i],max(a[j],a[k]));
                int rest=len-M;
                if(M<rest){
                    ans=max(ans,len);
                }
            }
        }
    }
printf("%d\n",ans);



return 0;
}
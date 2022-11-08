#include<stdio.h>
int main(){
    signed long ulsum =0;
	signed long ulcount =5;
	while(0<=ulcount){
		ulsum+=ulcount;
		ulcount--;
		
	}
	printf("%lu\n",ulsum);
	return 0;
	
	
	
}

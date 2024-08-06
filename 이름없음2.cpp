#include <stdio.h>
int main(){
	int e=0,o=0;
	
	for(int i=1;i<=10;i++)
	{
		if(i%2==0){
			e+=i;
		
	}
		else{
		
		o+=i;
		}
	}
		printf("%d %d",e,o);
}

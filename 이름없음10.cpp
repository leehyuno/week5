100이하의 약수중 약수의 갯수가 가장많은것 
#include <stdio.h>
int main(){
	int cnt=0,max=0,best=0;
	
	
	for(int i = 1;i<=100;i++){
		printf("%d : ",i);
		cnt=0;
		for(int j =1;j<=i;j++){
			
			if(i%j==0){
				printf("%d ",j);
				cnt++;
			}
		}
		if(cnt>max){
			best = i;
			max=cnt;
			
		}
		printf("\n");	
	}
		
	printf("약수가 가장 많은 수 : %d",best);
}

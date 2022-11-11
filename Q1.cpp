#include<stdio.h>
#include<math.h>
int screen(int num){
	for(int i=1;i<=sqrt(num);i++){
		if(num%i==0){
			return -1;
		}
	}
	return num;
}
int main(){
	int n=0;
	int num=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		if(screen(num)!=-1){
			printf("%d ",num);
		}
	}
	return 0;
}

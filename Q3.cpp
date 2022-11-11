#include<stdio.h>
char s[100][100]={0};
char as[100][100]={0};
void sort(int n){
	for(int i=0;i<n;i++){
		int j;
		for(j=0;s[i][j]!='\n';j++);
		for(int z=0;z<j;z++){
			as[j][z]=s[i][z];
		}
	}
	
}
int main(){
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",&s[i]);
	}
	sort(n);
	for(int i=0;i<100;i++){
		if(as[i]!=0){
			printf("%s",as[i]);
		}
	}
	return 0;
}

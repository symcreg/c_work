#include<stdio.h>
char s[100]={0};
int split(){
	int ret=0;
	for(int i=0;s[i]!='\n';i++){
		if(s[i]==' '){
			ret++;
		}
	}
	return ret;
}
int main(){
	
	scanf("%s",s);
	printf("%d",split());
	return 0;
}

#include<stdio.h>
int split(char *s){
	int ret=0;
	for(int i=0;s[i]!='\n';i++){
		if(s[i]==' '){
			ret++;
		}
	}
	return ret;
}
int main(){
	char s[100]={0};
	scanf("%s",s);
	printf("%d",split(s));
	return 0;
}

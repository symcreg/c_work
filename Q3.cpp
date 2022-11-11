#include<stdio.h>
#include<string.h>
int n=0;
char s[100][100]={0};
int l[100];
void sort(){
	for(int i=0;i<n;i++){
		l[strlen(s[i])]=i;
	}
}
int main(){
	memset(l,-1,sizeof(l));
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",&s[i]);
	}
	sort();
	for(int i=0;i<100;i++){
		if(l[i]!=-1){
			printf("%s ",s[l[i]]);
		}
	}
	return 0;
}

#include<stdio.h>

void strlength(char[]);

void main(){
	char s1[30];
	gets(s1);
	strlength(s1);
}

void strlength(char s1[]){
	int i=0, len=0;
	while(s1[i] != '\0'){
		i++;
		len++;
	}
	printf("%d", len);
}
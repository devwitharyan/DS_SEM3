#include<stdio.h>

void strcopy(char[]);

void main(){
	char s1[30];
	gets(s1);
	strcopy(s1);
}

void strcopy(char s1[]){
	int i=0;
	char s2[30];
	while(s1[i] != '\0'){
		s2[i] = s1[i];
		i++;
	}
	s2[i]='\0';
	printf("String 2 is:");
	puts(s2);
}
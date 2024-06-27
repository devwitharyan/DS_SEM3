//write a program to append a string in the end of the first string


#include<stdio.h>
void strappend(char[], char[]);

void main(){
	char s1[30], s2[30];
	gets(s1);
	gets(s2);
	strappend(s1, s2);
}

void strappend(char s1[], char s2[]){
	int i=0, len=0, str2len=0;
	while(s2[str2len] != '\0'){
		str2len++;
	}
	while(s1[len] != '\0'){
		len++;
	}

	for(i=0; i<str2len;i++){
		s1[len] = s2[i];
		len++;
	}
	s1[len] = '\0';
	puts(s1);
}
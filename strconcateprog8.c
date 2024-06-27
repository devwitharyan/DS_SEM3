#include<stdio.h>

void strconcate(char[], char[]);

void main(){
	char s1[30], s2[30];
	gets(s1);
	gets(s2);
	strconcate(s1, s2);
}

void strconcate(char s1[], char s2[]){
	int i=0, j=0, k=0;
	char s3[30];
	while(s1[i] != '\0'){
		s3[j]=s1[i];
		i++;
		j++;
	}
	while(s2[k] != '\0'){
		s3[j] = s2[k];
		j++;
		k++;
	}
	s3[j] = '\0';
	puts(s3);
}
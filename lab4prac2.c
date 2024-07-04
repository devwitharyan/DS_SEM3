//reverse string

#include<stdio.h>

void main(){
	char s1[100], s2[100];
	gets(s1);
	reversestr(s1,s2);
	puts(s2);
}

int reversestr(char *s1, char *s2){
	int i=0;
	while(*s1 !='\0'){
		i++;
		s1++;
	}
	s1--;
	while(i>0){
		*s2 = *s1;
		s1--;
		s2++;
		i--;
	}
	*s2 = '\0';
}
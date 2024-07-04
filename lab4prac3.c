//uppercase and lowercase

#include<stdio.h>

void main(){
	char str[100];
	gets(str);
	lower(str);
	upper(str);
	puts(str);
}

void lower(char *str){
	while(*str != '\0'){
		if(*str >= 65 && *str <=90){
			*str = *str + 32;
		}
		str++;
	}
}

void upper(char *str){
	while(*str != '\0'){
		if(*str >= 97 && *str <=122){
			*str = *str - 32;
		}
		str++;
	}
}
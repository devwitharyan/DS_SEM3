//compare
#include<stdio.h>

int strlenght(char s1[])
{
	int i=0,len=0;
	while(s1[i]!='\0')
	{
		i++;
		len++;
	}
	return len;
}


void main(){
	char s1[10], s2[10];
	int comp;
	gets(s1);
	gets(s2);
	int s1len,s2len;
	s1len=strlenght(s1);
	s2len=strlenght(s2);

	comp = comparestr(s1, s2, s1len, s2len);	
	if(comp == 1){
		printf("string is same");
	}
	else{
		printf("String is different");
	}
}

int comparestr(char *s1, char *s2, int s1len, int s2len){
	if(s1len != s2len){
		return 0;
	}
	else{
		while(*s1 != '\0'){
			if(*s1 != *s2){
				return 0;
			}
			else{
				s1++;
				s2++;
			}

		}
		return 1;
	}
	
}
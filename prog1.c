
//WAP to read and display a number using array
#include<stdio.h>


void main(){
	int arr[10];
	int i;


	for(i=0;i<(sizeof(arr)/4);i++){
		scanf("%d\n", &arr[i]);
	}

	for(i=0;i<(sizeof(arr)/4);i++){
		printf("%d\n", arr[i]);
	}
}
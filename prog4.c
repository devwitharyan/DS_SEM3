//WPA to delete a given element from an array

#include<stdio.h>

void main(){
	
	int arr[] = {10,20,30,40,50};
	int i,pos,val=10;


	printf("Enter position to delete: ");
	scanf("%d", &pos);

	for(i=pos;i<5;i++){
		arr[pos] = arr[pos+1];
		arr[pos++];
	}

	for(i=0;i<4;i++){
		printf("\n%d\n", arr[i]);
	}
}
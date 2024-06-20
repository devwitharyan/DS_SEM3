//WAP to calculate sum of numbers from 1 to n using array.


#include<stdio.h>

int sum(int);

void main(){
	int n, len;
	printf("Enter how many number you want to enter: ");
	scanf("%d", &n);
	printf("sum is : %d", sum(n));
}

int sum(int x){
	int arr[x], sum, i;

	printf("Enter elements: ", x);

	for(i=0;i<x;i++){
		scanf("%d", &arr[i]);

		sum=sum+arr[i];
	}
	return sum;
}